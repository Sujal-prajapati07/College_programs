class A extends Thread
{
    public void run()
    {
        System.out.println(getName()+" Hello");
    }
}

class Qu4
{
    public static void main(String[] args) 
    {
        A obj=new A();

        A obj1=new A();

        A obj2=new A();


        obj.start();
        obj.setName("t1");
        obj1.start();
        obj1.setName("t2");
        obj2.start();
        obj2.setName("t3");
    }
}