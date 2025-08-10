sum=0
count=0

while True:
    num=int(input("Enter a number (negative number to stop):"))
    if num<0:
        break
    sum+=num
    count+=1

if count > 0:
  average = sum / count
else:
  average=0

print("Total numbers entered:", count)
print("Sum of entered numbers:", sum)
print("Average of entered numbers:", average)