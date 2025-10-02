<?php
	$currentDate=date("Y-m-d");

	echo "<h1>";
	echo "Today : $currentDate"."<br>";
	echo "After 15 Days : ".date("Y-m-d",strtotime("+15 Days"))."<br>";
	echo "Before 15 Days : ".date("Y-m-d",strtotime("-15 Days"))."<br>";
	echo "</h1>";

	$currentDate1=new DateTime();

	echo "Today : ".$currentDate1->format("Y-m-d")."<br>";

	$currentDate1=modify("+25 days");
	echo "After 25 Days : ".$currentDate1->format("Y-m-d")."<br>";

	//already added 25 days,so substract -50 days=25 days before original
	$currentDate1=modify("-50 days");
	echo "Before 25 Days : ".$currentDate1->format("Y-m-d")."<br>";

?>