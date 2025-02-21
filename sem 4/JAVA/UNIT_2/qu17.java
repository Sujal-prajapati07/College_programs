import java.util.Stack;

public class qu17 
{
    public static void main(String[] args) 
    {
        Stack <Integer> s=new Stack<>();

        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);

        System.out.println(s);

        System.out.println("Top element is : "+s.peek()); //show top element

        System.out.println("Delete element is : "+s.pop()); //Delete

        System.out.println(s);

        System.out.println(s.search(20)); //reverse position count
    }    
}
