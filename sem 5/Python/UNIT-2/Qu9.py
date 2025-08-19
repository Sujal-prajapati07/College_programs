number=[int(d) for d in input("Enter a number: ")]
#for d in => Loops through each character in the string one by one
#int(d) => Converts each character to an integer

result=[]

for i,num in enumerate(number):
    if i % 2 == 0:
        result.append(num**2)
    else:
        result.append(num**3)

print("Original List:",number)
print("Result List : ",result)