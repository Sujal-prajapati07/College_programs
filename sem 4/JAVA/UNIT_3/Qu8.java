interface A 
{
    void add(int a,int b);
}

interface B
{
    void mul(int a,int b);
}
class C implements A,B
{
    public void add(int a,int b)
    {
        System.out.println("Addition is : "+(a+b));
    }

    public void mul(int a,int b)
    {
        System.out.println("Multiplication is : "+(a*b));
    }
}
class Qu8 
{
    public static void main(String[] args) 
    {
        C obj=new C();

        obj.add(5, 6);
        obj.mul(10, 2);
    }
    
}
