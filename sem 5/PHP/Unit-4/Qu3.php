<?php
	$str="Order ID: 2456, Amount: 500";

	preg_match_all("/\d+/", $str,$match);

	print_r($match[0]);

?>