<?php
    function average($arr) 
    {
        return array_sum($arr) / count($arr);
    }

    $arr = array(32,43,13,56,75,33,65);
    echo "Average Temperature: " . average($arr);
?>
