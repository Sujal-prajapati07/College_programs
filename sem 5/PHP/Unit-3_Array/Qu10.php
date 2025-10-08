<?php
    $students = array(
        "Sujal" => array("Math" => 90, "Science" => 85),
        "Kirtan" => array("Math" => 70, "Science" => 75),
        "Purav" => array("Math" => 80, "Science" => 82),
    );

    foreach ($students as $name => $subjects) 
    {
        echo "<b>$name</b><br>";
        foreach ($subjects as $subject => $marks) 
        {
            echo "$subject: $marks<br>";
        }
        echo "<br>";
    }
?>
