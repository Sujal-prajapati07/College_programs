class A extends Thread
{
    int time=0;

    A(String name,int a)
    {
        setName(name);
        start();
        time=a;
    }
    public void run()
    {
        for(int i=0;i<=10;i++)
        {
            try
            {
                System.out.println(getName()+" from method "+i);
                Thread.sleep(time);
                
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
        }
    }
}

class Qu1
{
    public static void main(String[] args) 
    {
        A t1=new A("Thread-1",2000);
        A t2=new A("Thread-2", 4000);
    }
}

