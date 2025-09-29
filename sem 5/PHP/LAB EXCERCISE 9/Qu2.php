<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the Email:<input type="text" name="email">
		<br><br>
		<input type="Submit" value="Check validate or not">
		<br>
	</form>

	<?php
		if ($_SERVER["REQUEST_METHOD"]=="POST") 
		{
		    $email = $_POST['email'];

		    if(preg_match("/^[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,}$/i", $email)) 
		    {
		        echo "This is Valid email";
		    } 
		    else 
		    {
		        echo "Invalid email";
		    }
		}
	?>
</body>
</html>

<!-- filter_var is a built-in PHP function used to validate data
if(filter_var($email,FILTER_VALIDATE_EMAIL)) 
{
    echo "Valid email";
} 
else 
{
    echo "Invalid email";
} -->