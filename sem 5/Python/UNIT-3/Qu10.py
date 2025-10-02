def recursive_func(num):
	if num==0:
		return 0
	else:
		return num+recursive_func(num-1)

result=recursive_func(10)

print("Sum of numbers from 0 to 10 is:", result)