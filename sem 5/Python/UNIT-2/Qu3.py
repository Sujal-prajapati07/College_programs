names=[]

for i in range(1,11):
    name=input("Enter your name: ")
    names.append(name)
print("Names List:", names)

if len(names) != len(set(names)):
  print("Duplicate names found.")
else:
  print("No duplicate names found.")