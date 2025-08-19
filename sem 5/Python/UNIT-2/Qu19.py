import random

numbers = []

for _ in range(10):
    numbers.append(random.randint(1, 100))  # Generate random numbers between 1 and 100

print("<------------------------------>")
print("Original list:", numbers)

average = sum(numbers) / len(numbers)

print("<------------------------------>")
print("Average of original list:", average)
numbers = [num for num in numbers if num <= average]

print("<------------------------------>")
print("Final list:", numbers)