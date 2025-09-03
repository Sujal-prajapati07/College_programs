list1 = [[1, 2], [3, 4], [5]]
list2 = []

for i in list1:
    for j in i:
        list2.append(j)

print("Flatted list:", list2)
