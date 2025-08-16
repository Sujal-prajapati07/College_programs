<?php
	if (isset($_POST['str']) && isset($_POST['check'])) 
	{
		$str=$_POST['str'];
		
		function reverse($str)
		{
			return strrev($str);
		}

		$result=reverse($str);

		echo "<h1>Original String is : $str</h1>";
		echo "<h1>Reversed String is : $result</h1>";
	}
?>