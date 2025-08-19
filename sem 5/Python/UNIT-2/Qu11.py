num=int(input("Enter the number : "))

for i in range(num):
  for j in range(num):
    if i==j or i+j==num-1:
      print("*",end="")
    else:
      print(" ",end="")
  print()