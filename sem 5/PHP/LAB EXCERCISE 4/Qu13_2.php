<?php
	if (isset($_POST['num']) && isset($_POST['check'])) 
	{
		$num=$_POST['num'];
		$check=$_POST['check'];

		function checkDivisible($num) 
		{
		    if ($num%2==0 && $num%3==0) 
		    {
		        return "<h1>$num is divisible by both 2 and 3</h1>";
		    } 
		    else if ($num%2==0) 
		    {
		        return "<h1>$num is divisible by 2</h1>";
		    } 
		    else if ($num%3==0) 
		    {
		        return "<h1>$num is divisible by 3</h1>";
		    } 
		    else 
		    {
		        return "<h1>$num is not divisible by 2 or 3</h1>";
		    }
		}

		$result=checkDivisible($num);

		echo $result;
	}
?>