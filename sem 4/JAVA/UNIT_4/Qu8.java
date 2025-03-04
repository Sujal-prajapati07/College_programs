class Qu8 
{
    public static void main(String[] args)throws Exception
    {
        try
        {
            int div=10/0;
            // int div=10/5;

            System.out.println("Answer is : "+div);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Divide by zero is not possible " +e.getMessage());
        }
        finally
        {
            System.out.println("Error...");
        }
    }    
}
