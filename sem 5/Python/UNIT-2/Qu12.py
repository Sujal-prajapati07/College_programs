p = input("Enter a paragraph: ")

words = p.split()
print("Words:", len(words))

vowels = "AEIOUaeiou"
v = 0
c=0
for ch in p:
    if ch.isalpha():
        if ch in vowels:
            v += 1
        else:
            c += 1

print("Vowels:", v)
print("Consonants:", c)

freq = {} #which word occurs how many times
for w in words:
    freq[w] = freq.get(w, 0) + 1

print("---------------------------------")
print("Frequencies:", freq)


