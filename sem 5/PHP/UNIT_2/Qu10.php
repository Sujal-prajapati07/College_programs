<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the String:<input type="text" name="str">
		<br>
		<input type="submit" name="Submit">
	</form>
</body>
</html>

<?php
	if(isset($_POST['str']))
	{
		$str=$_POST['str'];

		echo "<h3>";
		echo "Original string is : $str<br>";
		echo "String length is : ".strlen($str)."<br>";
		echo "String UpperCase is : ".strtoupper($str)."<br>";
		echo "String Reverse is : ".strrev($str)."<br>";
		echo "String Count word is : ".str_word_count($str)."<br>";
		echo "</h3>";

	}
?>