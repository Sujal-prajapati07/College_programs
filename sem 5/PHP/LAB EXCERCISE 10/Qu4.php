<?php
	//create Cookie
	if (!isset($_COOKIE['user'])) 
	{
		setcookie("user","Sujal",time()+86400);//(24*60*60=86400)
		$str="Cookie 'user' created";
	}
	else
	{
		$str="Cookie 'user' exists. value : ".$_COOKIE['user'];
	}

	//Delete Cookie
	if (isset($_POST['delete'])) 
	{
		setcookie("user","",time()-3600);//time() returns the current time.time()-3600 means 1 hour in the past
		$str="Cookie 'user' has been deleted";
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
		<input type="submit" name="delete" value="Delete Cookie">		
	</form>
	<p><?php echo $str;?></p>
</body>
</html>