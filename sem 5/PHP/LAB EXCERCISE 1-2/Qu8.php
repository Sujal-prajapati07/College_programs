<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Subject1_Marks:<input type="number" step="0.01" name="s1">
		<br>
		Subject2_Marks:<input type="number" step="0.01" name="s2">
		<br>
		Subject3_Marks:<input type="number" step="0.01" name="s3">
		<br>
		<input type="submit" name="Get Total">
	</form>
</body>
</html>

<?php
	if (isset($_POST['s1']) && isset($_POST['s2']) && isset($_POST['s2'])) 
	{
		$sub1=(float)$_POST['s1'];
		$sub2=(float)$_POST['s2'];
		$sub3=(float)$_POST['s3'];

		$total_marks=$sub1+$sub2+$sub3;

		echo "<h1>Total Marks : $total_marks";
	}
?>