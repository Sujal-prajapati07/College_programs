<?php
	session_start();

	if (isset($_SESSION['count'])) 
	{
		$_SESSION['count']++;
	}
	else
	{
		$_SESSION['count']=0;
	}
?>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post" action="Qu2_2_reset.php">
		<input type="submit" name="Page Refresh Counter">
		<br><br>
	</form>
	<p>Refresh this page <?php echo $_SESSION['count'];?> Time</p>
</body>
</html>