class Qu17 
{
    public static void main(String[] args) 
    {
        for(int i=50;i<=100;i++)
        {
            int count=0;
            
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }

            if(count==2)
            {
                if(i%2!=0)
                {
                    System.out.println(i+" prime number and also odd number");
                }
            }
        }
    }
}
