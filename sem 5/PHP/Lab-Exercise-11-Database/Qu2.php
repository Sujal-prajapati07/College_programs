<?php
	$conn=mysqli_connect("localhost","root","root","db1");

	if(!$conn)
	{
		echo "Connection failed : ".mysqli_error();
	}
	else
	{
		echo "Database connected";
	}

	$table_create="create table Students (
	Id int AUTO_INCREMENT PRIMARY KEY,
	name varchar(50),
	email varchar(100),
	age int
	)";

	if(mysqli_query($conn,$table_create))
	{
		echo "Table Created successfully";
	}
	else
	{
		echo "Error : ".mysqli_error($conn);
	}

	$conn->close();

?>