<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php 
		$currentDate=date_create(date("Y-m-d"));
		$newYear=date_create((date("Y")+1)."-01-01");

		$diff=date_diff($currentDate,$newYear);

		echo "<h1>Difference between two date is : ",$diff->days,"</h1>"; 
	?>
</body>
</html>