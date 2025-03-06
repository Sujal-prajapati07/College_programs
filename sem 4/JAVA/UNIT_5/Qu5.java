class even extends Thread
{
    public void run()
    {
       try
       {
            for(int i=1;i<=10;i++)
            {
                if(i%2==0)
                {
                    System.out.println("Even : "+i);
                    Thread.sleep(1000);
                }
            }
       }
       catch(Exception e)
       {
         System.out.println(e);
       }
    }
}

class odd implements Runnable
{
    public void run()
    {
        try
        {
             for(int i=1;i<=10;i++)
             {
                 if(i%2!=0)
                 {
                     System.out.println("Odd : "+i);
                     Thread.sleep(1000);
                 }
             }
        }
        catch(Exception e)
        {
          System.out.println(e);
        }
    }
}

class Qu5
{
    public static void main(String[] args) 
    {
        even t1=new even();

        odd obj=new odd();

        Thread t2=new Thread(obj);

        t1.start();
        t2.start();
    }
}

