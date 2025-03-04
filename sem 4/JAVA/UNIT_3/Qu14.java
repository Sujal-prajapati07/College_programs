class shape
{
    void s()
    {
        System.out.println("This is the shape");
    }
}

class Rectangle extends shape
{
    void s1()
    {
        System.out.println("This is the Rectangle");
    }
}

class Circle extends shape
{
    void s2()
    {
        System.out.println("This is the Circle");
    }
}

class square extends Rectangle
{
    void s3()
    {
        System.out.println("square is rectangle");
    }
}

class Qu14
{
    public static void main(String[] args) 
    {
        square obj=new square();

        obj.s();
        obj.s1();
        obj.s3();
    }
}


