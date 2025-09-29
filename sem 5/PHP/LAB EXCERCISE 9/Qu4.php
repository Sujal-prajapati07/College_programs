<?php

	$str = "Order 1930452 amount 1500";

	preg_match_all('/\d+/', $str, $match);

	print_r($match[0]);
?>

<!-- 
\d+...matches one or more digits.
preg_match_all()...finds all matches in the string.
$match...use for index -->