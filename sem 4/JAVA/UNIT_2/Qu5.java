import java.util.*;

class Qu5 
{
    public static void main(String[] args) 
    {
        int arr[][]=new int[2][2];

        System.out.println("Enter the array element : ");
        Scanner sc=new Scanner(System.in);

        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }

        int min=arr[0][0];

        for(int i=0;i<arr.length;i++)//row
        {
            for(int j=0;j<arr[i].length;j++)//column
            {
                if(arr[i][j]<min)
                {
                    min=arr[i][j];
                }
            }
        }

        System.out.println("Minimum value is : "+min);
    }    
}
