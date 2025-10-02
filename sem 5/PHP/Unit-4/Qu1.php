<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the number:<input type="number" name="mobile">
		<input type="Submit" value="check">
	</form>
	<?php
	if(isset($_POST['mobile']))
	{
		$valid=$_POST['mobile'];

		if (preg_match("/^[0-9]{10}$/",$valid))
		{
			echo "Mobile Number is Valid";
		}
		else
		{
			echo "Mobile Number is not valid";
		}
	}
	?>
</body>
</html>