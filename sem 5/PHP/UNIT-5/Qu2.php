<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Name:<input type="text" name="name">
		<br><br>
		Email:<input type="text" name="email">
		<br><br>
		<input type="submit" name="submit">
	</form>

	<?php
		if($_SERVER["REQUEST_METHOD"]=="POST")
		{
			$name=$_POST['name'];
			$email=$_POST['email'];

			echo "<h1>People Who are registerd : </h1>";

			echo "<h2>Name: $name</h2>";
    		echo "<h2>Email: $email</h2>";


		}
	?>
</body>
</html>