str="       Welcome to python"

print("String is : ",str)
print("First character is : ",str[0])
print("3 to -1 using slice :",str[2:-1])
print("4 to end using slice : ",str[3:])
print("String print 5 times : ",str*5)
print("Occurrence of 'to':", str.count("to"))
print("Length of string:", len(str))
print("Lowercase:", str.lower())
print("Index of 'Python':", str.find("Python"))
print("Without leading spaces:", str.lstrip())
print("Ends with 'is' : ", str.endswith("is"))