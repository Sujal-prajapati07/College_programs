from collections import Counter

try:
    fname = input("Enter file name: ")
    with open(fname, "r") as f:
        text = f.read()
except FileNotFoundError:
    print("File not found")
    exit()
except IOError:
    print("Cannot read file")
    exit()

words = text.lower().split()

print("Total words:", len(words))

freq = Counter(words)
most_common = freq.most_common(1)[0]
print("Most frequent word:", most_common[0],"=",most_common[1], "times")

print("Unique words:", set(words))
