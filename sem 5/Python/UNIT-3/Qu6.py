def calculation(a,b):
	return [a+b,a-b]

num1=int(input("Enter the number 1 : "))
num2=int(input("Enter the number 2 : "))

result=calculation(num1,num2)

print("Addition : ",result[0])
print("Substraction : ",result[1])