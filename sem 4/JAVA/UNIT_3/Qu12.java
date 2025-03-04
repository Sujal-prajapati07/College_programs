interface sports
{
    void setSportsMarks(int marks);
    int getSportsMarks();
}

class Marks implements sports
{
    int totalMarks;
    int sportsMarks;
    double percentage;
    char grade;

    Marks(int s1,int s2,int s3)
    {
        this.totalMarks=s1+s2+s3;
    }

    public void setSportsMarks(int marks)
    {
        this.sportsMarks=marks;
    }

    public int getSportsMarks()
    {
        return this.sportsMarks;
    }

    void grade()
    {
        int total=totalMarks+sportsMarks;

        this.percentage=(total/5.0);

        if(percentage>=90)
        {
            grade='A';
        }
        else if(percentage>=80)
        {
            grade='B';
        }
        else if(percentage>=70)
        {
            grade='C';
        }
        else if(percentage>=60)
        {
            grade='D';
        }
        else
        {
            grade='F';
        }
    }

    void display()
    {
        System.out.println("Total : "+(totalMarks+sportsMarks));
        System.out.println("Percentage : "+percentage);
        System.out.println("Grade : "+grade);
    }
}

class Qu12
{
    public static void main(String[] args) 
    {
        Marks obj=new Marks(50, 60, 75);

        obj.setSportsMarks(70);
        obj.grade();
        obj.display();
    }
}