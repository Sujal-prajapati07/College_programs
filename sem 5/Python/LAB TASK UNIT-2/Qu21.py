brackets = input("Enter a string of brackets: ")

stack = []
pairs = {')': '(', ']': '[', '}': '{'}

for char in brackets:
    if char in "([{":
        stack.append(char)
    elif char in ")]}":
        if stack and stack[-1] == pairs[char]:
            stack.pop()
        else:
            print("Brackets are NOT balanced")
            break
else:
    if not stack:
        print("Brackets are balanced")
    else:
        print("Brackets are NOT balanced")
