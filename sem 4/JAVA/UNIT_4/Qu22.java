import java.util.*;
class Qu22
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the string : ");

        StringBuffer sb=new StringBuffer(sc.nextLine());

        System.out.println("Reversed string is : "+sb.reverse());

        System.out.println("Replace string is : "+sb.replace(2, 6, "Hello"));

        System.out.println("String convert to Uppercase : "+sb.toString().toUpperCase());

        System.out.println("String convert to Lowercase : "+sb.toString().toLowerCase());
    }
}
