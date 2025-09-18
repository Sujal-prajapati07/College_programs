<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		$str="Name,Age,Course,Grade";

		$token=strtok($str,",");

		while ($token!=false) 
		{
			echo $token ."<br>";
			$token=strtok(",");//take next token
		}
	?>
</body>
</html>