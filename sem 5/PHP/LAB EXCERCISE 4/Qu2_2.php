<?php
	if(isset($_POST['num1']) && isset($_POST['check']))
	{
		$num1=$_POST['num1'];
		$check=$_POST['check'];

		switch ($num1) 
		{
			case '1':
				echo "<h1>It's Monday</h1>";
				break;
			
			case '2':
				echo "<h1>It's Tuesday</h1>";
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
				echo "<h1>Invalid</h1>";
				break;
		}
	}
?>