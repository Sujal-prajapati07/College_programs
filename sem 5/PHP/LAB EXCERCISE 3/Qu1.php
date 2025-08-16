<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		if(isset($_POST['num1']) && isset($_POST['num2']))
		{
			$num1=$_POST['num1'];
			$num2=$_POST['num2'];
			$sum=$num1+$num2;
		}
	?>
	<form method="post">
		<table border="1">
			<tr>
				<td>Enter the First Number:</td>
				<td><input type="number" name="num1" required>
			</tr>
			<tr>
				<td>Enter the Second Number:</td>
				<td><input type="number" name="num2" required>
			</tr>
			<tr>
				<td colspan="3" style="text-align: center;"><input type="submit" value="Add"></td>
			</tr>
			<tr>
				<td style="text-align: center;">Sum</td>
				<td>
					 <input type="number" value="<?php echo $sum; ?>" readonly style="text-align: center;">
				</td>
			</tr>
		</table>
	</form>
</body>
</html>