<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title></title>
</head>
<body>
    <form method="post">
        Enter 8 numbers(using space):<input type="text" name="nums" required>
        <button type="submit">Submit</button>
    </form>

    <?php
        if($_SERVER["REQUEST_METHOD"]=="POST")
        {
            $input = $_POST['nums'];

            $arr = explode(" ",trim($input)); 

            if(count($arr)!=8)
            {
                echo "Please enter 8 numbers.";
            } 
            else 
            {
                echo "<h3>";
                echo "Array: ";
                foreach($arr as $num)
                {
                    echo $num." ";
                }
                echo "</h3>";

                $sum = array_sum($arr);
                $avg = $sum / count($arr);
                $largest = max($arr);
                $smallest = min($arr);

                echo "<h3>";
                echo "<br>Sum: $sum";
                echo "<br>Average: $avg";
                echo "<br>Maximum Number: $largest";
                echo "<br>Minimum Number: $smallest";
                echo "</h3>";
            }
        }
?>
</body>
</html>