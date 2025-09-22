<!DOCTYPE html>
<html>
<head>
    <title>Array Input</title>
</head>
<body>
    <form method="post">
        Enter 5 numbers: 
        <input type="text" name="num" required>
        <br>
        <button type="submit">Submit</button>
    </form>

    <?php
        if($_SERVER["REQUEST_METHOD"]=="POST")
        {
            $input=$_POST['num'];
            $arr=explode(" ", trim($input));
            echo "Original Array : ";
            foreach ($arr as $number) 
            {
                echo $number." ";
            }

            echo "<br>";
            echo "Array reverse : ".implode(" ",array_reverse($arr));
        }
    ?>
</body>
</html>
