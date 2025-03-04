class A
{
    int a,b;
    A(int a,int b)
    {
        this.a=a;
        this.b=b;
    }

    void func()
    {
        System.out.println("Answer of both value is : "+(a+b));
    }
}

class B extends A
{
    int c;
    B(int a,int b,int c)
    {
        super(a, b);
        this.c=c;
    }

    void func()
    {
        super.func();
        System.out.println("Answer of three value is : "+(a*b*c));
    }
}
class Qu7 
{
    public static void main(String[] args) 
    {
        B obj=new B(5, 6, 7);

        obj.func();
    }    
}
