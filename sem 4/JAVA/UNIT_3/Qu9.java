class A
{
    void s()
    {
        System.out.println("This is parent class");
    }
}

class B extends A
{
    void s1()
    {
        System.out.println("This is child class");
    }
}
class Qu9 
{
    public static void main(String[] args) 
    {
        A obj=new A();

        obj.s();

        B obj1=new B();

        obj1.s1();
        obj1.s();
    }
}
