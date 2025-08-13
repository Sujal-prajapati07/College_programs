<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the age:<input type="number" name="age">
		<br>
		<input type="submit" name="Submit">
	</form>
</body>
</html>

<?php
	if(isset($_POST['age']))
	{
		$age=$_POST['age'];

		if($age>=18)
		{
			echo "<h1>Eligible to Vote</h1>";
		}
		else
		{
			echo "<h1>Not Eligible</h1>";
		}
	}
?>