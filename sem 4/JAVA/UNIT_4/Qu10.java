public class Qu10 
{
    static void displayArray(int[] arr) 
    {
      for (int i : arr) 
      {
        System.out.print(i + " ");
      }
      System.out.println();
    }
  
    public static void main(String[] args) 
    {
      System.out.println("Unsorted array !!");
      int[] arr = { 12, 35, 123, 45, 57, 34, 566, 788, 6, 45, 23, 3345, 67, 79, 79 };
      displayArray(arr);
  
      try 
      {
        System.out.println("Descending Sorted array !!");
        for (int i = 0; i < arr.length; i++) {
          for (int j = i; j < arr.length; j++) 
          {
            if (arr[i] < arr[j]) 
            {
              int dupli = arr[i];
              arr[i] = arr[j];
              arr[j] = dupli;
            }
          }
        }
  
        displayArray(arr);
      } 
      catch (Exception e) 
      {
        System.out.println(e);
      }
    }
  }
