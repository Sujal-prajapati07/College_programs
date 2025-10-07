<?php
	$conn = mysqli_connect("localhost", "root", "root", "db1");

	if (!$conn) 
	{
	    die("Connection failed: " . mysqli_connect_error());
	} 
	else 
	{
	    echo "<h1>Connection Successful</h1>";
	}

	mysqli_close($conn);
?>
