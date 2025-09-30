<?php
	session_start();

	if (!isset($_SESSION['name'])) 
	{
		$_SESSION['name']="Sujal Prajapati";
		$_SESSION['email']="sujal12@gmail.com";
	}

	if (isset($_POST['modify'])) 
	{
		$_SESSION['email']="sujal34@gmail.com";
	}

	if (isset($_POST['unset'])) 
	{
		unset($_SESSION['email']);
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
	<form method="post">
        <input type="submit" name="modify" value="Modify Email"><br><br>
        <input type="submit" name="unset" value="Unset Email">
    </form>
    <p>Name:<?php echo $_SESSION['name'];?></p>
    <p>Email:<?php echo isset($_SESSION['email']) ? $_SESSION['email'] : "Email is unset"; ?></p>
</body>
</html>