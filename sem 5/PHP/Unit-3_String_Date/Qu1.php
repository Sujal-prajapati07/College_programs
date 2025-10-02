<?php
	$birthDate=new DateTime("1980-12-7");

	$currentDate=new DateTime();

	$difference=$currentDate->diff($birthDate);

	echo "your age is : ".$difference->y;

?>