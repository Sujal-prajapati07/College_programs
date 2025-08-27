checkEven=lambda a:a%2==0

numbers=[1,2,3,4,5]

even_numbers=list(filter(checkEven,numbers))
print("Even numbers in the list are: ",even_numbers)