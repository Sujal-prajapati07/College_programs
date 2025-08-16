<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>

	<?php
		$result="";
		if(isset($_POST['v1']) && isset($_POST['v2']) && isset($_POST['sum']))
		{
			$v1=$_POST['v1'];
			$v2=$_POST['v2'];
			$op=$_POST['sum'];

			switch ($op) 
			{
				case 'ADD':
					$result=$v1+$v2;
					break;
				
				case 'SUBTRACT':
					$result=$v1-$v2;
					break;

				case 'MULTIPLY':
					$result=$v1*$v2;
					break;

				case 'DIVIDE':
					$result=$v1/$v2;
					break;
				default:
					$result="";
					break;
			}
		}
	?>

	<fieldset style="background: grey; width: 330px;">
		<form method="post">
			<h1 style="color: blue;"><b>Form With Multiple Submit Button</b></h1>

			<b>Value1:</b><input type="number" name="v1" required>
			<br>
			<b>Value2:</b><input type="number" name="v2" required>
			<br>
			<b>Result:</b><input type="number" name="result" value="<?php if(isset($result))echo $result; ?>" readonly>
			<br><br>
			
			<input type="submit" name="sum" value="ADD"> <input type="submit" name="sum" value="SUBTRACT"><br><br>
			<input type="submit" name="sum" value="MULTIPLY"> <input type="submit" name="sum" value="DIVIDE">
			
		</form>
	</fieldset>
</body>
</html>