numbers=[]
for i in range(10):
    n=int(input(f"Enter number {i+1}:"))
    numbers.append(n)

even_numbers=[]

for i in numbers:
    if i%2==0:
        even_numbers.append(i)

for i in set(even_numbers):
    print(i,"appears",even_numbers.count(i),"times")