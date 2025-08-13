<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Number:<input type="number" name="num">
		<br>
		<input type="submit" name="Submit">
	</form>
</body>
</html>
<?php
	if(isset($_POST['num']))
	{
		$num=$_POST['num'];

		if($num%2==0)
		{
			echo "<h1>Number is Even</h1>";
		}
		else
		{
			echo "<h1>Number is Odd</h1>";
		}
	}
?>