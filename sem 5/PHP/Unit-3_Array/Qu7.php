<?php
    $arr1 = array(1, 2, 3);
    $arr2 = array(4, 5, 6);
    $sum = array();

    for ($i=0; $i<count($arr1);$i++) 
    {
        $sum[$i]=$arr1[$i]+$arr2[$i];
    }

    print_r($sum);
?>
