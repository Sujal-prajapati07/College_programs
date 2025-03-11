import java.util.*;

class LowBalanceException extends Exception
{
    public LowBalanceException(String s)
    {
        super(s);
    }
}

class Bank
{
    private double balance;

    public Bank(double currentBalance)
    {
        this.balance=currentBalance;
    }

    void deposit(double amount)
    {
        balance=balance+amount;
        System.out.println("Balance is : "+balance);
    }

    void withdraw(double amount)throws LowBalanceException
    {
        if(balance<amount)
        {
            throw new LowBalanceException("Fund not available");
        }
        balance=balance-amount;
        System.out.println("Balance is : "+balance);
    }
}
class Qu13 
{
    public static void main(String[] args) 
    {
        Bank obj=new Bank(1000.00);

        Scanner sc=new Scanner(System.in);
        try
        {
            for (int i=0;i<3;i++) 
            {
                System.out.println("Enter the withdraw amount : ");
                double n = sc.nextDouble();
                obj.withdraw(n);
            }
        }
        catch(LowBalanceException e)
        {
            System.out.println(e.getMessage());
        }

        sc.close();
    }
}
