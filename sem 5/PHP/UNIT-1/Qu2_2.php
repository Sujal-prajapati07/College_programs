<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
	$number1=(float) $_POST['number1'];
	$number2=(float) $_POST['number2'];
	
	$add=$number1+$number2;
	$sub=$number1-$number2;
	$mul=$number1*$number2;
	$div=$number1/$number2;
	$mod=$number1%$number2;
	
	echo "Addition of both value is : $add<br><br>";
	echo "Substraction of both value is : $sub<br><br>";
	echo "Multiplication of both value is : $mul<br><br>";
	echo "Divison of both value is : $div<br><br>";
	echo "Modulo of both value is : $mod<br><br>";
	?>
</body>
</html>