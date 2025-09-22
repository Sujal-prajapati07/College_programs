<?php
	$matrix1=array(array(1,2,3),array(4,5,6),array(7,8,9));
	$matrix2=array(array(10,20,30),array(40,50,60),array(70,80,90));

	echo "<h2>";
	echo "Array 1: "."<br>";
	for ($i=0; $i <3 ; $i++) 
	{ 
		for ($j=0; $j <3 ; $j++) 
		{ 
			echo $matrix1[$i][$j]." ";
		}
		echo "<br>";
	}
	echo "</h2>";

	echo "<h2>";
	echo "Array 2: "."<br>";
	for ($i=0; $i <3 ; $i++) 
	{ 
		for ($j=0; $j <3 ; $j++) 
		{ 
			echo $matrix2[$i][$j]." ";
		}
		echo "<br>";
	}
	echo "</h2>";

	$sum=array();

	for ($i=0; $i <3 ; $i++) 
	{ 
		for ($j=0; $j <3 ; $j++) 
		{ 
			$sum[$i][$j]=$matrix1[$i][$j]+$matrix2[$i][$j];
		}
	}

	echo "<h2>";
	echo "Addition of 2 Matrices : "."<br>";
	for ($i=0; $i <3 ; $i++) 
	{ 
		for ($j=0; $j <3 ; $j++) 
		{ 
			echo $sum[$i][$j]." ";
		}
		echo "<br>";
	}
	echo "</h2>";


	$students=array(
		"Sujal"=>array("English"=>86,"Hindi"=>75,"Gujarati"=>65),
		"Kirtan"=>array("English"=>76,"Hindi"=>70,"Gujarati"=>60),
		"Purav"=>array("English"=>56,"Hindi"=>75,"Gujarati"=>85),
	);

	foreach($students as $name => $marks)
	{
		echo "<h2>";
	    $total = 0;
	    echo "$name: ";
	    foreach($marks as $subject => $score)
	    {
	        echo "$subject=$score ";
	        $total+=$score;
	    }
    	echo "=>Total=$total<br>";
    	echo "</h2>";
	}
?>