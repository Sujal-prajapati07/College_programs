<?php
	if (isset($_POST['num']) && isset($_POST['check'])) 
	{
		$num=$_POST['num'];
		$check=$_POST['check'];

		function oddEven($num)
		{
			if($num%2==0)
			{
				echo "<h1>$num is Even</h1>";
			}
			else
			{
				echo "<h1>$num is Odd</h1>";
			}
		}

		$result=oddEven($num);

		echo $result;
	}
?>