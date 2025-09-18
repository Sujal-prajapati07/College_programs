str=input("Enter a string: ")

sub=input("Enter character to count : ")

end_sub=input("Enter substring to check ending : ")

find_sub=input("Enter substring to find : ")

print("------------------------------------")
print("Reversed string:", str[::-1])
print("Count:", str.count(sub))
print("Ends with substring:", str.endswith(end_sub))
print("Index:", str.find(find_sub))
print("------------------------------------")
