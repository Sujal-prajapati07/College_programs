<?php
	if (isset($_POST['num']) && isset($_POST['check'])) 
	{
		$num=$_POST['num'];
		$check=$_POST['check'];

		function factorial($num) 
		{
			$fact=1;
			for ($i=1; $i <=$num ; $i++) 
			{ 
				$fact=$fact*$i;
			}
			return $fact;
		}

		$result=factorial($num);

		echo "<h1>Factorial of $num number is : $result</h1>";
	}
?>