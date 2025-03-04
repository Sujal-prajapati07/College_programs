interface Operations
{
    void aoc(int r);
    void aor(int l,int w);
    void aos(int s);
}


class A implements Operations
{
    public void aoc(int r)
    {
        float pi=3.14f;
        System.out.println("Area of circle is : "+(pi*r*r));
    }

    public void aor(int l,int w)
    {
        System.out.println("Area of Rectangle is : "+(l*w));
    }

    public void aos(int s)
    {
        System.out.println("Area of square is : "+(s*s));
    }
}
class Qu4 
{
    public static void main(String[] args) 
    {
        A obj=new A();

        obj.aoc(5);
        obj.aor(5, 6);
        obj.aos(4);
    }
}
