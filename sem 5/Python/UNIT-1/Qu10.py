num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print("Bitwise AND ", num1 & num2) #ex.. 5&3 = 1 (binary 0101 & 0011 = 0001)
print("Bitwise OR ", num1 | num2)  #ex.. 5|3 = 7 (binary 0101 | 0011 = 0111)
print("Bitwise XOR ", num1 ^ num2) #ex.. 5^3 = 6 (binary 0101 ^ 0011 = 0110)
print("Bitwise NOT ", ~num1)    #ex.. ~5 = -6 (binary ~0101 = 1010, which is -6 in two's complement)
print("Left Shift ", num1 << 2)  # Shift bits of num1 to the left by 2 positions
print("Right Shift ", num1 >> 2)  # Shift bits of num1 to the right by 2 positions