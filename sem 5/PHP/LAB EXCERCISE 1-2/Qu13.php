<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Number1:<input type="text" name="num1">
		<br>
		Number2:<input type="text" name="num2">
		<br>
		Operation:
		<select name="task">
			<option><---Select operation---></option>
			<option value="+">+</option>
			<option value="-">-</option>
			<option value="*">*</option>
			<option value="/">/</option>
		</select>
		<br>
		<input type="submit" name="Get Answer">
	</form>
</body>
</html>

<?php
	if(isset($_POST['num1']) && isset($_POST['num2']) && isset($_POST['task']))
	{
		$num1=$_POST['num1'];
		$num2=$_POST['num2'];
		$task=$_POST['task'];

		$result="";
		switch ($task) 
		{
			case '+':
				$result=$num1+$num2;
				break;

			case '-':
				$result=$num1-$num2;
				break;

			case '*':
				$result=$num1*$num2;
				break;

			case '/':
				if($num2==0)
				{
					echo "can not divide by zero";
				}
				else
				{
					$result=$num1/$num2;
				}
				break;

			default:
				$result="Invalid";
				break;
		}
		
		echo "<h1>Result is : $result</h1>";
	}
?>