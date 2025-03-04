class MotorVehicle
{
    String ModelName;
    int ModelNumber;
    int ModelPrice;

    MotorVehicle(String ModelName,int ModelNumber,int ModelPrice)
    {
        this.ModelName=ModelName;
        this.ModelNumber=ModelNumber;
        this.ModelPrice=ModelPrice;
    }
    void display()
    {
        System.out.println("ModelName is : "+ModelName);
        System.out.println("ModelNumber is : "+ModelNumber);
        System.out.println("ModelPrice is : "+ModelPrice);
    }
}

class Car extends MotorVehicle
{
    int discountRate;

    Car(String ModelName,int ModelNumber,int ModelPrice,int discountRate)
    {
        super(ModelName, ModelNumber, ModelPrice);
        this.discountRate=discountRate;
    }
    void display()
    {
        super.display();
        System.out.println("DiscountRate is : "+discountRate);
    }
}

class Qu1
{
    public static void main(String[] args) 
    {
        Car obj=new Car("Hyundai",234,700000,10);

        obj.display();

    }
}