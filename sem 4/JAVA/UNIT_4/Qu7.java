class Qu7 
{
    public static void main(String[] args) 
    {
        int[] arr=new int[5];

        try
        {
            int value=arr[10];

            System.out.println(value);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println(e.getMessage());
        }
    }    
}
