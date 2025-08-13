<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the Number:<input type="number" name="day">
		<br>
		<input type="submit" name="Check the day">
	</form>
</body>
</html>

<?php
	if(isset($_POST['day']))
	{
		$age=$_POST['day'];

		switch ($age) {
			case '1':
				echo "<h1>It's Monday</h1>";
				break;
			
			case '2':
				echo "<h1>It's Tuseday</h1>";
				break;

			case '3':
				echo "<h1>It's Wednesday</h1>";
				break;

			case '4':
				echo "<h1>It's Thursday</h1>";
				break;

			case '5':
				echo "<h1>It's Friday</h1>";
				break;

			case '6':
				echo "<h1>It's Saturday</h1>";
				break;

			case '7':
				echo "<h1>It's Sunday</h1>";
				break;
			default:
				echo "<h1>Enter valid day number</h1>";
				break;
		}
	}
?>