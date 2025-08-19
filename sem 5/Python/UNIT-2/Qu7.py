keys = input("Enter keys: ").split()
values = input("Enter values: ").split()

dictionary = dict(zip(keys, values)) 
#zip(keys, values) pairs them together...dict is used to create a dictionary
print("Original Dictionary:", dictionary)

reversed_dict = {v:k for k,v in dictionary.items()} 
#my_dict.items() gives all key–value pairs
print("Reversed Dictionary:", reversed_dict)

