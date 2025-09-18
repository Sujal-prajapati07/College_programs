num=int(input("Enter the number (must be greater 5 : )"))

assert num > 5 ,"Number must be greater 5"

print("Number is : ",num) 

with open("1.txt", "w") as f:
    f.write(f"Entered number : {num}\n")