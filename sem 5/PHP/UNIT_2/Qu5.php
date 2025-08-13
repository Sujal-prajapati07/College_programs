<?php
	echo "<h1>1 to 10 print using for loop</h1>";

	for ($i=1;$i<=10;$i++) 
	{ 
		echo $i." ";
	}

	echo "<h1>1 to 10 print using While loop</h1>";

	$i=1;
	while ($i<=10) 
	{
		echo $i." ";
		$i++;
	}

	echo "<h1>1 to 10 print using Do While loop</h1>";

	$i=1;
	do 
	{
		echo $i." ";
		$i++;
	} while ($i<=10);
?>