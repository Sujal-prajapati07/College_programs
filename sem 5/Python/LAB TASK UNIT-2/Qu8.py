numbers=[]

for i in range(5):
    n=int(input(f"Enter number {i+1}:"))
    numbers.append(n)

print("Numbers entered:",numbers)

for index,value in enumerate(numbers):
    print(f"Index : {index} , Value : {value}")

if all(num>=0 for num in numbers):
    print("All numbers are non-negative.")
else:
    print("Negative number found.")

if any(num%2==0 for num in numbers):
    print("even number found.")
else:
    print("No even numbers found.")

