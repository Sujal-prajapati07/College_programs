<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form action="Qu12_2.php" method="post">
		Name:<input type="text" name="val1">
		<br><br>
		Age:<input type="text" name="val2">
		<br><br>
		<b>Gender</b><br>
		Male:<input type="radio" value="Male" name="val3">
		<br>
		Female:<input type="radio" value="Female" name="val3">
		<br><br>
		<b>Hobbies</b><br>
		Cricket:<input type="checkbox" value="Cricket" name="Hobbies[]">
		<br><br>
		Reading:<input type="checkbox" value="Reading" name="Hobbies[]">
		<br><br>
		Gym:<input type="checkbox" value="Gym" name="Hobbies[]">
		<br><br>
		Photography:<input type="checkbox" value="Photography" name="Hobbies[]">
		<br><br>
		<input type="Submit" value="Submit">
	</form>
</body>
</html>