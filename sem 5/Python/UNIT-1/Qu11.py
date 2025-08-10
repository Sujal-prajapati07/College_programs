list1=[1,2,3,4,5]
list2=list1
list3=[1,2,3,4,5]

print("list1 is list2 : ", list1 is list2)  # True, same object
print("list1 is list3 : ", list1 is list3)  # False, different objects
print("list1 == list2 : ", list1 == list2)  # True, same content
print("list1 not list3 : ", list1 is not list3) # True, different objects