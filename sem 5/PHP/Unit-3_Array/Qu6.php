<?php
    $marks = array(
        "SEM1" => 43,
        "SEM2" => 65,
        "SEM3" => 85,
        "SEM4" => 25,
        "SEM5" => 65
    );

    echo "<b>Sorted Semester:</b><br>";
    ksort($marks);
    foreach ($marks as $sem => $mark) 
    {
        echo "$sem => $mark<br>";
    }

    echo "<br><br>";

    echo "<b>Sorted Marks:</b>";
    asort($marks);
    foreach ($marks as $sem => $mark) 
    {
        echo "$sem => $mark<br>";
    }
?>
