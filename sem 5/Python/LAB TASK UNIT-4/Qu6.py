try:
	num1=int(input("Enter the number 1 : "))
	num2=int(input("Enter the number 2: "))

	result=num1/num2
	print("Result : ",result)
except ZeroDivisionError:
	print("Can not divide by zero...")
finally:
	print("Exit!!")