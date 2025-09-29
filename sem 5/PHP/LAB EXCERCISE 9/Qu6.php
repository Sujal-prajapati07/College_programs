<?php
	$str = "apple,pineapple;orange|grape";

	$newStr = preg_split("/[;,|]/", $str);

	print_r($newStr);
?>

<!-- preg_split() can split by any number of characters or patterns -->