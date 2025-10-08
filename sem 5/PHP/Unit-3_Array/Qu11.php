<?php
    $directions = array("Up"=>"North","Down"=>"South","Left"=>"West","Right"=>"East");

    echo "<b>Keys:</b><br>";
    foreach (array_keys($directions) as $key) 
    {
        echo "$key<br>";
    }

    echo "<b>Values:</b><br>";
    foreach (array_values($directions) as $value) 
    {
        echo "$value<br>";
    }
?>
