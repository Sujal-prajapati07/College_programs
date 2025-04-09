import java.util.*;

class Qu7 
{
    public static void main(String[] args) 
    {
        int marks[]=new int[3];

        System.out.println("Enter the students marks in physics : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<marks.length;i++)
        {
            marks[i]=sc.nextInt();
        }

        int count=1;
        
        for(int arr:marks)
        {
            System.out.println("Marks "+count+" : "+arr);
            count++;
        }
    }
}
