<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the string:<input type="text" name="str"><br>
		<input type="submit" name="submit">
	</form>
	<?php
		if(isset($_POST['str']))
		{
			$lTrim=$_POST['str'];
			$rTrim=$_POST['str'];
			$Trim=$_POST['str'];

			echo "<h1>";
			echo "Left Trim : ",ltrim($lTrim);
			echo "<br>";
			echo "Right Trim : ",rtrim($rTrim);
			echo "<br>";
			echo "Trim : ",trim($Trim);
			echo "<br>";
			echo "</h1>";
		}
	?>
</body>
</html>