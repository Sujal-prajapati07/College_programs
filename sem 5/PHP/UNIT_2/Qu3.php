<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Enter the Marks:<input type="number" name="mark">
		<br>
		<input type="submit" name="Check Your Result">
	</form>
</body>
</html>

<?php
	if(isset($_POST['mark']))
	{
		$marks=$_POST['mark'];

		if($marks>=90 && $marks<100)
		{
			echo "<h1>Your Grade is : A</h1>";
		}
		elseif ($marks>=75 && $marks<=89) 
		{
			echo "<h1>Your Grade is : B</h1>";
		}
		elseif ($marks>50 && $marks<=74) 
		{
			echo "<h1>Your Grade is : C</h1>";
		}
		elseif ($marks<50) 
		{
			echo "<h1>Fail</h1>";
		}
		else
		{
			echo "<h1>Please Enter Valid Marks</h1>";
		}
	}
?>