<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form method="post">
		UserName:<input type="text" name="name">
		<br>
		Id:<input type="number" name="id">
		<br>
		<input type="submit" name="Submit">
	</form>
</body>
</html>

<?php
	if (isset($_POST['name']) && isset($_POST['id'])) 
	{
	    $name = $_POST['name'];
	    $id = $_POST['id'];

	    if ($id === "") 
	    {
	        echo "Id cannot be blank";
	    } 
	    else 
	    {
	    	echo "Welcome $name<br>";
	    }
	}
?>