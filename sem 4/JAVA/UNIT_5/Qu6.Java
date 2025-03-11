class A extends Thread
{
	public void run()
	{
		try
		{
			System.out.println("Thread-1"+Thread.currentThread().getPriority());
			Thread.sleep(1000);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class B extends Thread
{
	public void run()
	{
		try
		{
			System.out.println("Thread-2"+Thread.currentThread().getPriority());
			Thread.sleep(5000);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class C extends Thread
{
	public void run()
	{
		try
		{
			System.out.println("Thread-3"+Thread.currentThread().getPriority());
			Thread.sleep(3000);
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class Qu6
{
	public static void main(String[] args) 
	{
		A t1=new A();

		B t2=new B();

		C t3=new C();

		t1.setPriority(2);
		t2.setPriority(3);
		t3.setPriority(1);

		t1.start();
		t2.start();
		t3.start();
	}
}