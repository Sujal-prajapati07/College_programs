even_num=set()

for i in range(1,21):
    if i%2==0:
        even_num.add(i)

prime_num=set()
for i in range(1,21):
    is_prime=True
    for j in range(2,i):
        if i%j==0:
            is_prime=False
            break
    if is_prime:
        prime_num.add(i)

print("Even numbers:",even_num)
print("Prime numbers:",prime_num)
#union all merge
print("Union : ",even_num.union(prime_num))
#intersection common
print("Intersection : ",even_num.intersection(prime_num))
#difference even not in prime
print("Difference even but not prime : ",even_num.difference(prime_num))
#symmetric difference not common
print("Symmetric Difference not common : ",even_num.symmetric_difference(prime_num))

fset=frozenset(even_num)
print("Frozenset of Even numbers:",fset)