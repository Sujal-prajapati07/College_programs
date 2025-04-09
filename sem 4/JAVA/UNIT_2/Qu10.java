class sumAllelement
{
    void add(int...num)
    {
        int sum=0;

        for(int number:num)
        {
            sum=sum+number;
        }

        System.out.println("Sum of all element is : "+sum);
    }
}
class Qu10 
{
    public static void main(String[] args) 
    {
        sumAllelement obj=new sumAllelement();

        obj.add(10,20,30,40,50);//150
        obj.add(100,200);//300
        obj.add();//0
    }
}

//in variable length argument pass as many numbers as you want
