numbers=[]

for i in range(5):
    n=int(input(f"Enter number {i+1}:"))
    numbers.append(n)

sorted_numbers=sorted(numbers)

second_highest=sorted_numbers[-2]
third_highest=sorted_numbers[-3]

print("Second highest number is:", second_highest)
print("Third highest number is:", third_highest)