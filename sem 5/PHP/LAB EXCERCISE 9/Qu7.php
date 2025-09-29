<?php

	$str="Hey..Hello World";

	if (preg_match("/^Hello/i",$str)) 
	{
		echo "<h1>String Start with Hello</h1>";
	}
	else
	{
		echo "<h1>String not Start with Hello</h1>";
	}
?>