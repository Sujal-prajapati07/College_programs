<?php
	$date1=new DateTime("2024-09-07");
	$date2=new DateTime("2026-08-07");

	$diff=$date1->diff($date2);

	echo "Number of days between two date is : ".$diff->days;
	// echo "Number of months between two date is : ".$diff->m;
	// echo "Number of year between two date is : ".$diff->y;
?>