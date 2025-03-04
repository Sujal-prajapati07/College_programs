interface Numbers
{
    int process(int a,int b);
}

class Sum implements Numbers
{
    public int process(int a,int b)
    {
        return a+b;
    }
}

class Average implements Numbers
{
    public int process(int a,int b)
    {
        return (a+b)/2;
    }
}
class Qu5 
{
    public static void main(String[] args) 
    {
        Numbers obj=new Sum();
        Numbers obj1=new Average();

        System.out.println("Sum is : "+obj.process(10, 2));
        System.out.println("Average is : "+obj1.process(10, 20));
    }
}
