<?php
    echo "Next 6 Sundays:<br>";
    for($i=1;$i<=6;$i++)
    {
        echo date("Y-m-d",strtotime("Sunday +$i week"))."<br>";
    }

    echo "<br>Next Thursday:<br>";
    echo date("Y-m-d",strtotime("next Thursday"));
?>

//Sunday +$i week...it finds the Sunday after 1 week from now