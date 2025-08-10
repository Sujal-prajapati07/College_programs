n = int(input("How many numbers will you enter? "))

numbers = []
for i in range(n):
    num = int(input(f"Enter number {i + 1}: "))
    numbers.append(num)

numbers = tuple(numbers)

count = 0
total_sum = 0
for num in numbers:
    if num % 3 == 0 and num % 5 != 0:
        count += 1
        total_sum += num

print("Divisible by 3 Count:", count)
print("Sum:", total_sum)
