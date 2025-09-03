str=input("Enter a string : ")

word=str.split()

word_length={}

for w in word:
    word_length[w]=len(w)

max_length=max(word_length.values())

max_words=[]

for w in word_length:
    if word_length[w]==max_length:
        max_words.append(w)

print("----------------------------------")
print("Original string:", str)
print("word length:", word_length)
print("Longest word : ", max_words)
print("Maximum length:", max_length)