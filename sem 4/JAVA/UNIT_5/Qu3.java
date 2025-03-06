class A implements Runnable
{
    public void run()
    {
        try
        {
            for(int i=1;i<=10;i++)
            {
                System.out.println(i);
                Thread.sleep(1000);
            }
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class Qu3
{
    public static void main(String[] args) 
    {
        A obj=new A();

        Thread t1=new Thread(obj);

        t1.start();
    }
}
