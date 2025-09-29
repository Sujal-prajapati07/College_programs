<?php

	$str="Hey..Hello World";

	if (preg_match("/Hello$/",$str)) 
	{
		echo "<h1>String End with Hello</h1>";
	}
	else
	{
		echo "<h1>String not End with Hello</h1>";
	}
?>