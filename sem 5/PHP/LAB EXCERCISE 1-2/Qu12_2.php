<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php
		if($_SERVER['REQUEST_METHOD']=="POST")
		{
			$name=$_POST['val1'];
			$age=$_POST['val2'];
			$gender=$_POST['val3'];

			echo "Your name is : $name <br>";
			echo "Your age is : $age <br>";
			echo "Your gender is : $gender <br>";

			$hobbie=$_POST['Hobbies'];
			echo "Your Hobbie is : ";
			foreach ($hobbie as $h) 
			{
				echo "$h,";
			}
		}
	?>
</body>
</html>