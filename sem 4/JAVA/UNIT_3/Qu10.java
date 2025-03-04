class Rectangle 
{
    int length;
    int breath;
}
  
class AreaAndPerimeter extends Rectangle 
{
    String boxName;
  
  AreaAndPerimeter(int length, int breath, String boxName) 
  {
    super.breath = breath;
    super.length = length;
    this.boxName = boxName;
  }
  
  void calculateArea() 
  {
    System.out.println("Area of rectangle(" + this.boxName + ") : " + (length * breath));
  }
  
  void calculatePerimeter() 
  {
      System.out.println("Perimeter of rectangle(" + this.boxName + ") : " + (2*(length + breath)));
  }
}
  
class Qu10 
{
  public static void main(String[] args) 
  {
      AreaAndPerimeter rect = new AreaAndPerimeter(15, 240, "Box1");
  
      rect.calculateArea();
      rect.calculatePerimeter();
  }
}
