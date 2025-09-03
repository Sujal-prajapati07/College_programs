numbers=[]

for i in range(10):
    n=int(input(f"Enter a number {i+1}: "))
    numbers.append(n)

nums=tuple(numbers)

even,odd=0,0

for n in nums:
    if n%2==0:
        even+=1
    else:
        odd+=1

prime_num=[]

for n in nums:
    if n>1:
        flag=0
        for i in range(2,n):
            if n%i==0:
                flag=1
                break
        if flag==0:
            prime_num.append(n)

print("-----------------------------------")

print("Even number:",even)
print("Odd number:",odd)
print("Prime number:",prime_num)

print("-----------------------------------")

if prime_num:
    print("Max prime : ",max(prime_num))
    print("Min prime : ",min(prime_num))
    print("Sum of all prime numbers : ",sum(prime_num))
else:
    print("No prime number found")