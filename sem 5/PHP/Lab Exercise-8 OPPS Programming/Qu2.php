<?php
	class BankAccount
	{
		private $accNo;
		private $balance;

		function __construct($accNo,$balance)
		{
			$this->accNo=$accNo;
			$this->balance=$balance;
		}

		function deposit($amount)
		{
			$this->balance += $amount;
		}

		function withDraw($amount)
		{
			if($amount<=$this->balance)
			{
				$this->balance -= $amount;
			}
			else
			{
				echo "Balance Not Available";
			}
		}

		function getBalance()
		{
			echo "-------------------------------------------<br>";
			echo "Account Number : $this->accNo<br>";
			echo "Balance : $this->balance<br>";
			echo "-------------------------------------------<br>";
		}
	}

	$b1=new BankAccount(193,50000);
	$b2=new BankAccount(131,40000);

	$b1->deposit(10000);
	$b1->withDraw(5000);
	$b1->getBalance();

	$b2->deposit(10000);
	$b2->withDraw(4000);
	$b2->getBalance();
	
?>