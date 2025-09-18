<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		echo "<h1>";
		$date1=mktime(12,45,26,9,7,2025);//hour,minute,second,month,day,year
		echo "mktime : ",date("l,d-m-y h:i A",$date1);
		echo "<br>";
		$date2=strtotime("7 July 2025 9:30 am");
		echo "strtotime : ",date("l,d-m-y h:i A",$date2);
		echo "</h1>";
	?>
</body>
</html>