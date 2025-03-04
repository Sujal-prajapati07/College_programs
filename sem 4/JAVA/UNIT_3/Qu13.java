class Rect
{
    int length;
    int breath;

    Rect(int length,int breath)
    {
        this.length=length;
        this.breath=breath;
    }

    void Area()
    {
        int ans=length*breath;
        System.out.println("Area is : "+ans);
    }

    void Perimeter()
    {
        int result=2*(length+breath);
        System.out.println("Perimeter is : "+result);
    }
}

class square extends Rect
{
    square(int side)
    {
        super(side,side);
    }
}

class Qu13
{
    public static void main(String[] args) 
    {
        Rect obj=new Rect(5, 5);

        obj.Area();//(5*5)
        obj.Perimeter();//2(5+5)

        square obj1=new square(9);

        obj1.Area();//(9*9)
        obj1.Perimeter();//2(9+9)
    }
}
