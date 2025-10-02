def outer(a,b):
	def inner():
		return a+b

	result=inner()+5
	return result

num1=int(input("Enter the number1 : "))
num2=int(input("Enter the number2 : "))

answer=outer(num1,num2)
print("Final Answer is(After 5 add) : ",answer)