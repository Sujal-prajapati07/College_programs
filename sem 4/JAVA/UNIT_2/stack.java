import java.util.*;
class Sta 
{
	public static void main(String[] args) {
		Stack <Integer> s = new Stack<>();
		s.push(10);
		s.push(20);
		s.push(30);
		s.push(40);
		s.push(50);
		s.push(60);

System.out.println(s);
System.out.println("Top element"+s.peek());
System.out.println("Delelte top element"+s.pop());
System.out.println(s);

if(s.isEmpty())
{
	System.out.println("Stack is Empty");
}
else 
{
	System.out.println("Stack is Full");	
}

System.out.println(s.search(20));

	}
}
