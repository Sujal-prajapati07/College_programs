num=int(input("Enter the number : "))

try:
	if num < 0:
		raise ValueError("Please enter the positive number")
	else:
		print("Number is: ",num)
except ValueError as e:
	print("Error : ",e)