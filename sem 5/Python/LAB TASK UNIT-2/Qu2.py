r=int(input("Enter the number of rows : "))

for i in range(1,r+1):
    for space in range(r-i):
        print(" ",end="")

    for j in range(1,2*i):
        if j==1 or j==2*i-1 or i==r:
            print("*",end="")
        else:
            print(" ",end="")
    print()