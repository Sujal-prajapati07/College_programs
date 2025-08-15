<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		Student Name:<input type="text" name="name">
		<br><br>
		English:<input type="number" name="eng">
		<br><br>
		Math:<input type="number" name="math">
		<br><br>
		Science:<input type="number" name="sci">
		<br><br>
		Computer:<input type="numer" name="comp">
		<br><br>
		Social Studies:<input type="number" name="ss">
		<br><br>
		<input type="submit" value="Get Result" name="submit">
	</form>
</body>
</html>

<?php
	if(isset($_POST['submit']))
	{
		$name=$_POST['name'];
		$eng=$_POST['eng'];
		$math=$_POST['math'];
		$sci=$_POST['sci'];
		$comp=$_POST['comp'];
		$ss=$_POST['ss'];

		$total=$eng+$math+$sci+$comp+$ss;
		$percentage=($total/500)*100;

		if($percentage >= 90) 
		{
			$result = "Pass";
			$grade = "A+";
		} 
		elseif($percentage >= 75) 
		{
			$result = "Pass";
			$grade = "A";
		} 
		elseif($percentage >= 60) 
		{
			$result = "Pass";
			$grade = "B";
		} 
		elseif($percentage >= 50) 
		{
			$result = "Pass";
			$grade = "C";
		} 
		elseif($percentage >= 35) 
		{
			$result = "Pass";
			$grade = "D";
		} 
		else
		{
			$result = "Fail";
			$grade = "F";
		}

		echo "<h1>Result For $name</h1>";
		echo "<table border='1' cellpadding='10'>
				<tr>
					<th>Subject</th>
					<th>Marks</th>
				</tr>
				<tr>
					<td>English</td>
					<td>$eng</td>
				</tr>
				<tr>
					<td>Maths</td>
					<td>$math</td>
				</tr>
				<tr>
					<td>Science</td>
					<td>$sci</td>
				</tr>
				<tr>
					<td>Computer</td>
					<td>$comp</td>
				</tr>
				<tr>
					<td>Social Studies</td>
					<td>$ss</td>
				</tr>
				<tr>
					<td>Total</td>
					<td>$total/500</td>
				</tr>
				<tr>
					<td>Percentage</td>
					<td>$percentage</td>
				</tr>
				<tr>
					<td>Result</td>
					<td>$result</td>
				</tr>
				<tr>
					<td>Grade</td>
					<td>$grade</td>
				</tr>
		</table>";

	}
?>