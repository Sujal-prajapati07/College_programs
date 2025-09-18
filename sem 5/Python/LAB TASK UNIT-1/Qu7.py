nums = [10, 20, 3, 20, 40, 11, 50, 3]

unique_num = []

for n in nums:
    if n not in unique_num:
        unique_num.append(n)

print("---------------------------------------------")
print("List without duplicates:", unique_num)
print("---------------------------------------------")