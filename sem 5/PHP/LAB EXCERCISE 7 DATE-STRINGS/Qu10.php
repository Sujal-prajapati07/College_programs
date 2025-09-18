<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		$dateDetails=getdate();

		echo "<h3>";
		echo "Current year : ",$dateDetails['year']."<br>";
		echo "Current month : ",$dateDetails['month']."<br>";
		echo "Current day : ",$dateDetails['weekday']."<br>";
		echo "Current day of the month : ",$dateDetails['mday']."<br>";
		echo "</h3>";
	?>
</body>
</html>