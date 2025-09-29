<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter Phone number:<input type="number" name="phone">
		<br><br>
		<input type="Submit" value="Check validate or not">
		<br><br>
	</form>

	<?php
		if ($_SERVER["REQUEST_METHOD"]=="POST")
		{
		    $phone = $_POST['phone'];

		    if(preg_match("/^[0-9]{10}$/", $phone)) 
		    {
		        echo "Valid phone number";
		    } 
		    else 
		    {
		        echo "Invalid phone number";
		    }
		}
	?>
</body>
</html>
