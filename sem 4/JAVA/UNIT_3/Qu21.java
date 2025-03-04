import java.util.*;
class Qu21 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the string1 : ");
        String str1=sc.nextLine();

        System.out.println("Enter the string2 : ");
        String str2=sc.nextLine();

        System.out.println("-------------------------------");
        System.out.println("String 1 : "+str1);
        
        System.out.println("String 1 : "+str2);
        System.out.println("-------------------------------");

        if(str1.equals(str2))
        {
            System.out.println("Both string are equal");
        }
        else
        {
            System.out.println("Both string are not equal");
        }

        if(str1.equalsIgnoreCase(str2))
        {
            System.out.println("Both string are equal ignoring case");
        }
        else
        {
            System.out.println("Both string are not equal ignoring case");
        }

        int result=str1.compareTo(str2);

        if(result==0)
        {
            System.out.println("Two strings are equal");
        }
        else if(result<0)
        {
            System.out.println("First string is smaller compare to Second string");
        }
        else
        {
            System.out.println("First string is Greater compare to Second string");
        }
    }   
}
