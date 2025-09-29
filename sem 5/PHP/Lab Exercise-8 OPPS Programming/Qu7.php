<?php
	interface PayementGateway
	{
		public function processPayment($amount);
	}


	class PayPal implements PayementGateway
	{
		public function processPayment($amount)
		{
			echo "<h2>";
			echo "Paid $amount using PayPal<br>";
			echo "</h2>";
		}
	}

	class CreditCard implements PayementGateway
	{
		public function processPayment($amount)
		{
			echo "<h2>";
			echo "Paid $amount using Credit Card<br>";
			echo "</h2>";
		}
	}

	$p=new PayPal();
	$c=new CreditCard();

	$p->processPayment(200);
	$c->processPayment(500);
?>