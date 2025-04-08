import java.util.*;

class Length
{
    double feet;
    double centimeter;

    Length(double f)
    {
        feet=f;
    }

    Length(Length l)
    {
        feet=l.feet;
        centimeter=feet*30.48;
    }

    void display()
    {
        System.out.println("Feet : "+feet);
        System.out.println("Centimeter : "+centimeter);
    }
}
class Qu10 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the feet : ");
        int f=sc.nextInt(); //5

        System.out.println("---Before conversion---");
        Length obj=new Length(f);
        obj.display(); //5

        System.out.println("---After conversion---");
        Length obj1=new Length(obj); //5*30.48
        obj1.display();
    }
}
