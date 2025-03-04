import java.util.*;

interface Area 
{
    float pi=3.14f;

    void compute(int x,int y);
}

class Circle implements Area
{
    public void compute(int r,int y)
    {
        System.out.println("Area of circle is : "+pi*r*r);
    }
}

class Rectangle implements Area
{
    public void compute(int l,int w)
    {
        System.out.println("Area of Rectangle is : "+l*w);
    }
}

class Qu11
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        Area a=new Circle();
        Area b=new Rectangle();

        System.out.println("Enter the radius : ");
        int radius = sc.nextInt();
        a.compute(radius, 0);

        
        System.out.println("Enter the length and width : ");
        int length = sc.nextInt();
        int width = sc.nextInt();
        b.compute(length, width);
    }
}
