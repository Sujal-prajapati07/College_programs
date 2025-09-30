<?php
	session_start();
	unset($_SESSION['count']); // only removes the counter
	header("Location:Qu2_1_reset.php");
	exit();
?>

<!-- unset() is use for remove specific variable
session_destroy() is use for destroy entire session -->