def largest_of_three(num1,num2,num3):
    if(num1>num2) and (num1>num3):
        return num1
    elif num2>num3:
        return num2
    else:
        return num3
    
n1=int(input("Enter first number: "))
n2=int(input("Enter second number: "))
n3=int(input("Enter third number: "))

print("Largest of three numbers is:",largest_of_three(n1,n2,n3))
        