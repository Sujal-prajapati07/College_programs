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
			$upper=$_POST['str'];
			$lower=$_POST['str'];
			$f_word=$_POST['str'];
			$f_char=$_POST['str'];

			echo "<h1>";
			echo "ToUpper : ",strtoupper($upper);
			echo "<br>";
			echo "ToLower : ",strtolower($lower);
			echo "<br>";
			echo "First character of each word : ",ucwords($f_word);
			echo "<br>";
			echo "First character of the string: ",ucfirst($f_char);
			echo "</h1>";
		}
	?>
</body>
</html>