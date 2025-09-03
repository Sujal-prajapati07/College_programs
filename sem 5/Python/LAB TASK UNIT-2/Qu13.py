numbers=[]

while True:
  num=int(input("Enter the number (0 to stop) : "))
  if num==0:
    break
  numbers.append(num)

if numbers:
  
  max_num=max(numbers)
  min_num=min(numbers)
  total_sum=sum(numbers)

  even_count=0
  for i in numbers:
    if i%2==0:
      even_count+=1

  print("Numbers entered:",numbers)
  print("Maximum number:",max_num)
  print("Minimum number:",min_num)
  print("Sum of numbers:",total_sum)
  print("Count of even numbers:",even_count)
