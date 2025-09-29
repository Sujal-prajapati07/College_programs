<?php
	$str = "P  H  P    is   awes    ome!";

	$clean = preg_replace('/\s+/', ' ', $str);

	$withoutSpacestring = trim($clean);

	echo "<h1>$withoutSpacestring</h1>";
?>