tuple1 = tuple(input("Enter the string : ").split())

vowels = "AEIOUaeiou"

count = 0

for word in tuple1:
    for char in word:
        if char in vowels:
            count += 1

print("Total number of vowels in string:", count)
