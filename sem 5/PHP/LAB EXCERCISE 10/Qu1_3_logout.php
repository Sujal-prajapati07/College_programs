<?php
	session_start();
	session_destroy();
	header("Location:Qu1_1_Login.php");
	exit();
?>