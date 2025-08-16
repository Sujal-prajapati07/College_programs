<?php
	if (isset($_POST['num1']) && isset($_POST['num2']) && isset($_POST['check'])) 
	{
		$num1=$_POST['num1'];
		$num2=$_POST['num2'];
		
		function product($num1,$num2)
		{
			return $num1 * $num2;
		}

		$result=product($num1,$num2);

		echo "<h1>Product of $num1 and $num2 is : $result</h1>";
	}
?>