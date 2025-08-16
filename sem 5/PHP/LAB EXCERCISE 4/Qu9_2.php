<?php
	if (isset($_POST['m1']) && isset($_POST['m2']) && isset($_POST['m3'])) 
	{
		$m1=$_POST['m1'];
		$m2=$_POST['m2'];
		$m3=$_POST['m3'];

		$total=$m1+$m2+$m3;
		$percentage=$total*100/300;

		if($percentage>=80 && $percentage<=100) 
		{
			echo "Grade A<br>";
		}
		else if($percentage>=60 && $percentage<80) 
		{
			echo "Grade B<br>";
		}
		else if($percentage>=35 && $percentage<60) 
		{
			echo "Grade C<br>";
		}
		else
		{
			echo "Fail";
		}

		echo "Total Marks : $total<br>";
		echo "Percentage : $percentage%<br>";
	}
?>