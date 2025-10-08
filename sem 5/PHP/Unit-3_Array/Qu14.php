<?php
	$salaries=array("atul"=>2000,"ravi"=>1000,"rahul"=>500);

	echo "<b>asort()</b><br>";
	asort($salaries);
	print_r($salaries);

	echo "<br><b>arsort()</b><br>";
	arsort($salaries);
	print_r($salaries);

	echo "<br><b>ksort()</b><br>";
	ksort($salaries);
	print_r($salaries);

	echo "<br><b>krsort()</b><br>";
	krsort($salaries);
	print_r($salaries);
?>
