class A implements Runnable
{
	private int sum;

	public int getsum()
	{
		return sum;
	}
	public void run()
	{
		try
		{
			sum=0;
			for (int i=1;i<=5;i++) 
			{
					sum+=i;
			}
			System.out.println("Sum of 1 to 5 is : "+sum);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}

	}
}

class B implements Runnable
{
	private int sum;

	public int getsum()
	{
		return sum;
	}
	public void run()
	{
		try
		{
			sum=0;
			for (int i=6;i<=10;i++) 
			{
					sum+=i;
			}
			System.out.println("Sum of 6 to 10 is : "+sum);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}

	}
}

class C implements Runnable
{
	private int sum;

	public int getsum()
	{
		return sum;
	}
	public void run()
	{
		try
		{
			sum=0;
			for (int i=11;i<=15;i++) 
			{
					sum+=i;
			}
			System.out.println("Sum of 11 to 15 is : "+sum);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}

	}
}

class Qu7
{
	public static void main(String[] args) 
	{
		A obj1=new A();
		B obj2=new B();
		C obj3=new C();

		Thread t1=new Thread(obj1);
		Thread t2=new Thread(obj2);
		Thread t3=new Thread(obj3);

		t1.start();
		t2.start();
		t3.start();

		int total=obj1.getsum()+obj2.getsum()+obj3.getsum();
		float avg=total/3;

		System.out.println("------------------------------------------");
		System.out.println("Total is : "+total);
		System.out.println("------------------------------------------");
		System.out.println("Average is : "+avg);
	}
}
