<?php
	function changeByvalue($num)
	{
		$num=$num+5;
		echo "Inside chnageByvalue : $num<br>";
	}

	function changeByref(&$num)
	{
		$num=$num+10;
		echo "Inside changeByref : $num<br>";
	}

	$num=10;

	echo "Original Number is : $num<br>";

	changeByvalue($num);
	echo "After chnageByvalue : $num<br>";

	changeByref($num);
	echo "After changeByref : $num<br>";
?>

<!-- Call by Value :=original variable is unchanged
Call by Reference :=original variable is changed -->