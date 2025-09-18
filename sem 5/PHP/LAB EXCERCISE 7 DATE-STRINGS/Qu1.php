<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the string:<input type="text" name="str"><br>
		<input type="submit" name="submit">
	</form>
	<?php
		if(isset($_POST['str']))
		{
			$slen=$_POST['str'];
			$srev=$_POST['str'];
			echo "<h1>";
			echo "String length is : ",strlen($slen);
			echo "<br>";
			echo "String reverse is : ",strrev($srev);
			echo "</h1>";
		}
	?>
</body>
</html>