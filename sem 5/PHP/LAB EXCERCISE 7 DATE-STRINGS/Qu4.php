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
			$split=$_POST['str'];
			$count=$_POST['str'];

			echo "<h3>";
			echo "String Split : ",print_r(str_split($split));
			echo "<br>";
			echo "String Word Count : ",str_word_count($count);
			echo "<br>";
			echo "</h3>";
		}
	?>
</body>
</html>