class Arithmetic 
{
    double[] values;
  
    public double mean() 
    {
      double total = 0;
  
      for (double d : values) 
      {
        total += d;
      }
  
      return total / values.length;
    }
  
    public double standardDeviation() 
    {
      double mean = mean();
  
      double total = 0;
  
      for (double d : values) 
      {
        double deviation = d - mean;
        deviation = Math.pow(deviation, 2);
        total += deviation;
      }
  
      double standardDeviation = total / values.length;
  
      return Math.sqrt(standardDeviation);
    }
  }
  
  class Qu3 
  {
    public static void main(String[] args) 
    {
      Arithmetic arithmetic = new Arithmetic();

      double[] values = { 5, 8, 10, 12, 15 };
      
      arithmetic.values = values;
  
      System.out.println("Mean :  " + arithmetic.mean());
      System.out.println("Standard deviation : " + arithmetic.standardDeviation());
    }
  }
