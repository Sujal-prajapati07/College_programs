import java.util.*;

class Qu17 
{
    public static void main(String[] args) 
    {
        Stack<Integer>stack=new Stack<>();

        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        stack.push(5);

        System.out.println("Stack element : "+stack);
        System.out.println("Peek element : "+stack.peek());
        System.out.println("Pop element : "+stack.pop());
        System.out.println("After Pop stack element : "+stack);
        System.out.println("2 is index no : "+stack.search(2));
    }    
}
