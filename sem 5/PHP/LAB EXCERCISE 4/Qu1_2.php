<?php
	if(isset($_POST['num1']) && isset($_POST['check']))
	{
		$num1=$_POST['num1'];
		$check=$_POST['check'];

		if($num1>0)
		{
			echo "<h1>$num1 is positive number</h1>";
		}
		else if($num1<0)
		{
			echo "<h1>$num1 is negative number</h1>";
		}
		else
		{
			echo "<h1>Number is zero</h1>";
		}
	}
?>