def vowel_count(str1):
    count=0
    vowels="aeiouAEIOU"
    for char in str1:
        if char in vowels:
            count+=1
    return count

string=input("Enter a string: ")
print("Number of vowels in the string: ",vowel_count(string))