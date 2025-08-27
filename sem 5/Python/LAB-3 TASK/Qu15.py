def word_frequency(str):
    words = str.split()   
    freq = {}                 
    
    for w in words:
        if w in freq:
            freq[w] += 1
        else:
            freq[w] = 1
    return freq

str = input("Enter a sentence: ")
result = word_frequency(str)
print("Word frequencies:", result)
