def square():
  for i in range(1,10+1):
    yield i**2

for sq in square():
  print(sq)
