<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the Number:<input type="number" name="num">
		<br>
		<input type="submit" name="Get Multiplication Table">
	</form>
</body>
</html>

<?php
	if(isset($_POST['num']))
	{
		$num=$_POST['num'];

		for ($i=1; $i<=10 ; $i++) 
		{ 
			$mul=$num*$i;
			echo "$num X $i = $mul<br>";
		}
	}
?>