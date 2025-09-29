<?php
	class Vehicle 
	{
	    public $name;

	    function __construct($name) 
	    { 
	    	$this->name = $name; 
	    }

	    function displayInfo() 
	    { 
	    	echo "Vehicle: $this->name<br>"; 
	    }
	}

	class Car extends Vehicle 
	{
	    function displayInfo() 
	    { 
	    	echo "<h1>Car: $this->name</h1><br>";
	    }
	}

	class Bike extends Vehicle 
	{
	    function displayInfo() 
	    { 
	    	echo "<h1>Bike: $this->name</h1><br>"; 
		}
	}

	class Truck extends Vehicle 
	{
	    function displayInfo() 
	    { 
	    	echo "<h1>Truck: $this->name</h1><br>";
	    }
	}

	$vehicle_info=[
		new Car("Honda City"), 
		new Bike("Apache"), 
		new Truck("Tata")
	];

	foreach($vehicle_info as $v) 
	{
		$v->displayInfo();
	}
?>
