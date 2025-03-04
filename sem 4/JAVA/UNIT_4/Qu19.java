
import java.util.Scanner;

class Qu19
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the string : ");

        StringBuffer sb=new StringBuffer(sc.nextLine());

        System.out.println("Reverse string is : "+sb.reverse());

        System.out.println("Enter the another string : ");
        String appendString=sc.nextLine();

        System.out.println("Append String is : "+sb.append(appendString));

        System.out.println("Capacity of string is : "+sb.capacity());
    }
}
