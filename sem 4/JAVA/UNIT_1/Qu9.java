import java.util.*;

class findArea
{
    findArea(float base,float height)
    {
        float AOT=(base*height)/2;
        System.out.println("Area of Triangle is : "+AOT);
    }

    findArea(int l,int w)
    {
        int AOR=l*w;
        System.out.println("Area of Rectangle is : "+AOR);
    }
}

class Qu9
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the base for Triangle : ");
        float base=sc.nextFloat();

        System.out.println("Enter the height for Triangle : ");
        float height=sc.nextFloat();

        findArea obj=new findArea(base, height);

        System.out.println("Enter the length for Rectangle : ");
        int length=sc.nextInt();

        System.out.println("Enter the width for Rectangle : ");
        int width=sc.nextInt();

        findArea obj1=new findArea(length, width);
    }
}
