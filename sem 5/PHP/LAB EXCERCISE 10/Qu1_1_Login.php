<?php
	session_start();

	$userName="root";
	$password="root";

	if (isset($_POST['login'])) 
	{
		if($_POST['username'] === $userName && $_POST['password'] === $password)
		{
			$_SESSION['username']=$userName;
			header("Location:Qu1_2_welcome.php");
			exit();
		}
		else
		{
			$error="Invalid Username and Password";
		}
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
		Username: <input type="text" name="username" required><br><br>
    	Password: <input type="password" name="password" required><br><br>
    	<input type="submit" name="login" value="Login">
	</form>
	<p><?php if(isset($error)) echo $error;?></p>
</body>
</html>