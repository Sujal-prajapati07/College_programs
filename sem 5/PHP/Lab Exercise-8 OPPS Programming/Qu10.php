<?php
    interface Printable 
    {
        function printDetails();
    }

    abstract class Shape 
    {
        abstract function area();
    }

    class Circle extends Shape implements Printable 
    {
        public $r;
        
        function __construct($r)
        { 
            $this->r = $r; 
        }
        function area()
        { 
            return 3.14 * $this->r * $this->r; 
        }
        function printDetails()
        { 
            echo "Circle radius $this->r, Area: ".$this->area()."<br>"; 
        }
    }

    class Square extends Shape implements Printable 
    {
        public $s;

        function __construct($s)
        { 
            $this->s = $s; 
        }
        function area()
        { 
            return $this->s * $this->s; 
        }
        function printDetails()
        { 
            echo "Square side $this->s, Area: ".$this->area()."<br>"; 
        }
    }

    class Triangle extends Shape implements Printable 
    {
        public $b,$h;

        function __construct($b,$h)
        { 
            $this->b=$b; $this->h=$h; 
        }
        function area()
        { 
            return 0.5*$this->b*$this->h; 
        }
        function printDetails()
        { 
            echo "Triangle base $this->b, height $this->h, Area: ".$this->area()."<br>"; 
        }
    }

    $shapes = [
        new Circle(5), new Square(4), new Triangle(6,3)
    ];

    foreach($shapes as $shape) 
    {
        $shape->printDetails();
    }
?>
