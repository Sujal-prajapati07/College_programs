<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Number1:<input type="number" name="num1">
		<br>
		Number2:<input type="number" name="num2">
		<br>
		<input type="submit" name="Submit">
	</form>
</body>
</html>

<?php
	if (isset($_POST['num1']) && isset($_POST['num2'])) 
	{
		$num1=$_POST['num1'];
		$num2=$_POST['num2'];

		$add=$num1+$num2;
		$sub=$num1-$num2;
		$mul=$num1*$num2;
		$div=$num1/$num2;

		echo "<ul>";
		echo "<li>Addition : $add</li>";
		echo "<li>Substraction : $sub</li>";
		echo "<li>Multiplication : $mul</li>";
		echo "<li>Division : $div</li>";
		echo "</ul>";
	}
?>