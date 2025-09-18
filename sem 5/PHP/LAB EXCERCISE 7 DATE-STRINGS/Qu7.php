<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		echo "<h3>";
		echo "Current date : ".date("d-m-y");
		echo "<br>";
		echo "Current time : ".date("h-i-s A",time());
		echo "</h3>";
	?>
</body>
</html>