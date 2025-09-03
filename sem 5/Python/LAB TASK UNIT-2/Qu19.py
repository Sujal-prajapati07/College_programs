num = int(input("Enter a number: "))
original = num
rev = 0

while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num = num // 10

if original == rev:
    print(f"{original} is a Palindrome")
else:
    print(f"{original} is NOT a Palindrome")
