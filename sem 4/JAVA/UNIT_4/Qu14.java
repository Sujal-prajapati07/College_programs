class Qu14
{
  public static void main(String[] args) 
  {
      try
      {
        int[] arr={10,20,30,40,50};

        // int ans=arr[10]/0;
        int ans=arr[4]/0;

        System.out.println(ans);
      }
      catch(ArrayIndexOutOfBoundsException e)
      {
        System.out.println("Array index out of bound");
      }
      catch(ArithmeticException e)
      {
        System.out.println("Can't divide by zero");
      }
      catch(Exception e)
      {
        System.out.println("Error");
      }   
  }
}
