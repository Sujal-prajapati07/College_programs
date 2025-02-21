//Write a Java Program that calculate area of triangle using Constructor. Also find area of rectangle using Constructor Overloading.
import java.util.*;
class Constructor_overloading
{
    Constructor_overloading()
    {
        Scanner x=new Scanner(System.in);
        System.out.println("Enter the b : ");
        int b=x.nextInt();

        Scanner y=new Scanner(System.in);
        System.out.println("Enter the h : ");
        int h=y.nextInt();

        double Area_of_Triangle=0.5*b*h;

        System.out.println("Area of Triangle is : "+Area_of_Triangle);
    }

    Constructor_overloading(int l,int w)
    {
        int Area_of_Rectangle=l*w;

        System.out.println("Area of Rectangle is : "+Area_of_Rectangle);
    }
}
class qu9 
{
    public static void main(String[] args) 
    {
        Constructor_overloading obj1=new Constructor_overloading();
        Constructor_overloading obj2=new Constructor_overloading(5,6);
    }    
}
