<?php
	if (isset($_POST['fn']) && isset($_POST['ln']) && isset($_POST['gy']) && isset($_POST['ad1']) && isset($_POST['ad1']) && isset($_POST['ad2'])) 
	{
		$fn=$_POST['fn'];
		$ln=$_POST['ln'];
		$gy=$_POST['gy'];
		$ad1=$_POST['ad1'];
		$ad2=$_POST['ad2'];

		echo "<h1>First Name :  $fn</h1><br>";
		echo "<h1>Last Name :  $ln</h1><br>";
		echo "<h1>Graduation year:  $gy</h1><br>";
		echo "<h1>Address1 :  $ad1</h1><br>";
		echo "<h1>Address2 :  $ad2</h1><br>";
	}
?>