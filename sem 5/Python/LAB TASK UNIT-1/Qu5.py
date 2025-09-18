num = int(input("Enter a number: "))

num = abs(num) #Handle negative numbers

count = 0

if num == 0:
    count = 1
else:
    while num > 0:
        num //= 10 
        count += 1

print("Total number of digits:", count)
