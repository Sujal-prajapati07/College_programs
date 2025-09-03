numbers = []

numbers.append(1)
numbers.append(2)
numbers.append(3)
print("After append:", numbers)

numbers.extend([4, 5])
print("After extend:", numbers)

numbers.insert(1, 10)
print("After insert:", numbers)

numbers.remove(3)
print("After remove:", numbers)

popped_value = numbers.pop()
print("After pop:", numbers)
print("Popped value:", popped_value)

numbers.reverse()
print("After reverse:", numbers)

numbers.sort(reverse=True)
print("After descending sort:", numbers)
