<?php
	class Product
	{
		private $name,$price;
		public static $count=0;
		const discount=0.1;

		function __construct($name,$price)
		{
			$this->name=$name;
			$this->price=$price;
			self::$count++;
		}

		function finalPrice()
		{
			$final=$this->price - ($this->price*self::discount);

			echo "----------------------------------------<br>";
			echo "Product Name : $this->name<br>";
			echo "Product Price : $final<br>";
			echo "----------------------------------------<br>";
		}
	}

	$p1=new Product("Mobile",25000);
	$p2=new Product("Headphone",6000);

	$p1->finalPrice();
	$p2->finalPrice();

	echo "Total Products : ".Product::$count;
?>