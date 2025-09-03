numbers=[]

for i in range(5):
    n=int(input(f"Enter number {i+1}:"))
    numbers.append(n)

num=tuple(numbers)

result=[]

for i in num:
    if i*i > 50:
        result.append(i)

print("Original tuple:", num)
print("Numbers whose square > 50:", result)