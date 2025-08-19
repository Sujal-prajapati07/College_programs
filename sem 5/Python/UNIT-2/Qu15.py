str=[] 

for i in range(5):
    s = input(f"Enter string {i+1}: ")
    str.append(s)

#key=len is used to find the longest and shortest string
large = max(str,key=len)
small = min(str,key=len) 

print("Longest string:", large)
print("Shortest string:", small)
