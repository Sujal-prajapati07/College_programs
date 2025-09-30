<?php
	session_start();
	if (!isset($_SESSION['username'])) 
	{
		header("Location:Qu1_1_Login.php");
		exit();
	}
?>
<!DOCTYPE html>
<html>
<head><title>Welcome</title></head>
<body>
	<h2>Welcome,<?php echo $_SESSION['username'];?></h2>
	<a href="Qu1_3_logout.php">Logout</a>
</body>
</html>