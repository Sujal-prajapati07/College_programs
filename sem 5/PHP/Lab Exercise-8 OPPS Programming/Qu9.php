<?php
    class CartItem 
    {
        public $name,$price,$quantity;

        function __construct($name,$price,$quantity) 
        {
            $this->name=$name;
            $this->price=$price;
            $this->quantity=$quantity;
        }

        function getTotalPrice() 
        {
            return $this->price*$this->quantity;
        }
    }

    $cart=[
        new CartItem("Shirt",500,3),
        new CartItem("T-Shirt",1000,4),
        new CartItem("Shoes",800,5)
    ];

    $grandTotal = 0;

    foreach($cart as $item) 
    {
        echo "Item : $item->name,Quantity : $item->quantity,Total: ".$item->getTotalPrice()."<br>";
        $grandTotal+=$item->getTotalPrice();
    }

    echo "<b>Grand Total: $grandTotal</b>";
?>
