import java.util.Scanner;

class Arithmetic
{
    int add(int a,int b)
    {
        return a+b;
    }

    int sub(int a,int b)
    {
        return a-b;
    }

    int mul(int a,int b)
    {
        return a*b;
    }

    double div(int a,int b)
    {
        return a/b;
    }
}

class Qu1
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the number1 : ");
        int a=sc.nextInt();
        System.out.println("Enter the number2 : ");
        int b=sc.nextInt();
        
        Arithmetic obj=new Arithmetic();

        int add=obj.add(a, b);
        System.out.println("Addition is : "+add);

        int sub=obj.sub(a, b);
        System.out.println("Substraction is : "+sub);

        int mul=obj.mul(a, b);
        System.out.println("Multiplication is : "+mul);

        double div=obj.div(a, b);
        System.out.println("Division is : "+div);
    }

}