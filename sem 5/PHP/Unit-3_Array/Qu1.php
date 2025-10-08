<?php
	$departments = array(
    "HR" => array("Girish","Neha","Puja"),
    "Account" => array("Asha","Rehan","Tina"),
    "Sales" => array("Twisha","Keyuri","Rohit")
	);

	foreach ($departments as $dept => $names) 
	{
	    sort($names);
	    echo "<b>$dept:</b> ".implode(", ", $names)."<br>";
	}
?>