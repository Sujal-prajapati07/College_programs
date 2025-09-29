<?php

	$str="Hello World";

	if (preg_match("/Hello/i",$str)) 
	{
		echo "<h1>Hello found in the string</h1>";
	}
	else
	{
		echo "<h1>Hello not found in the string</h1>";
	}
?>

<!-- preg_match() is use for checks if a pattern exists in a string or not 
	 i makes it case-insensitive(ignore uppercase or lowercase)-->