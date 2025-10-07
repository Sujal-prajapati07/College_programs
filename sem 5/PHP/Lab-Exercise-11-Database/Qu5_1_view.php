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

	$que="Select * from Students";
	$result=mysqli_query($conn,$que);

	echo "<h1>Student Records</h1>";
	echo "<table border=1>";
	echo "<tr>
			<th>ID</th>
			<th>Name</th>
			<th>Email</th>
			<th>Age</th>
			<th>Update</th>
			<th>Delete</th>
		  </tr>";

	while ($row = mysqli_fetch_row($result)) 
	{
	    echo "<tr>";
	    echo "<td>" . $row[0] . "</td>"; 
	    echo "<td>" . $row[1] . "</td>";
	    echo "<td>" . $row[2] . "</td>";
	    echo "<td>" . $row[3] . "</td>";
	    echo "<td>
	            <a href='Qu5_2_Update.php?id=$row[0]'>Update</a>
	          </td>";
	    echo "<td>
	            <a href='Qu5_3_Delete.php?id=$row[0]'>Delete</a>
          	  </td>";
	    echo "</tr>";
	}
	echo "</table>";

	$conn->close();
?>