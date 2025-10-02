<?php
	$date1="2024-09-07";
	$newDate=date("d-m-Y",strtotime($date1));
	echo "Date1 : ".$newDate."<br>";

	$date2="10:30pm April 15 2014";
	$newDate1=date("Y-m-d H:i:s",strtotime($date2));
	echo "Date2 : ".$newDate1;
?>