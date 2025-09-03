nums=[]

for i in range(10):
    n=int(input(f"Enter a number {i+1}: "))
    nums.append(n)

remove_duplicate=list(set(nums))

remove_duplicate.sort()

print("List after removing duplicates and sorting: ",remove_duplicate)

remove_duplicate=remove_duplicate[::-1]

print("List in descending order: ",remove_duplicate)

print("Second highest number is: ",remove_duplicate[1])

print("Second lowest number is: ",remove_duplicate[-2])

top5_element=remove_duplicate[:5]

avg=sum(top5_element)/len(top5_element)

print("Average of top 5 elements is: ",avg)
