str = input("Enter the words : ")

words = str.split()

word_dict = {}

for w in words:
    l = len(w)
    if l in word_dict:
        word_dict[l].append(w) #if length is already present in dictionary then append the word to the list
    else:
        word_dict[l] = [w] #if length is not present in dictionary then create a new list

print("----Words grouped by length----")
for length in word_dict:
    print(length, ":", word_dict[length])
