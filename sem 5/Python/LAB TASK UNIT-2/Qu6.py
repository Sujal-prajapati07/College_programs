nums = []

for i in range(10):
    
    n = int(input("Enter number: "))

    if n < 0:
        print("Negative entered. Stopping.")
        break
    
    if n % 3 == 0 and n % 5 == 0:
        continue
    nums.append(n)

else:
    print("Input complete")


print("Numbers entered:", nums)