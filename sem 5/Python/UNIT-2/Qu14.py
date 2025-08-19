tuple1=tuple(map(int,input("Enter the tuple1 number :").split()))
tuple2=tuple(map(int,input("Enter the tuple2 number :").split()))

common_elements=()

flag=False
for i in tuple1:
    for j in tuple2:
        if i==j and i not in common_elements:
            common_elements += (i,)
            flag=True
print("Common elements are : ", common_elements)

if not flag:
    print("No common elements found")


