shift = 3

file_name = input("Enter the file name to encrypt: ")

try:
    with open(file_name, "r") as f:
        text = f.read()
except FileNotFoundError:
    print("Error: File not found!")
    exit()
except IOError:
    print("Error: Cannot read file!")
    exit()

encrypted = ""
for char in text:
    if char.isalpha():
        if char.isupper():
            #ord(char) converts the character to its ASCII code.
            encrypted += chr((ord(char)-65 + shift) % 26 + 65)
        else:
            #for uppercase letters,we subtract 65
            #For lowercase letters,we subtract 97
            encrypted += chr((ord(char)-97 + shift) % 26 + 97)
    else:
        encrypted += char

#encrypted file
with open("Qu15_encrypted.txt", "w") as f:
    f.write(encrypted)

# Decrypt text
decrypted = ""
for char in encrypted:
    if char.isalpha():
        if char.isupper():
            decrypted += chr((ord(char)-65 - shift) % 26 + 65)
        else:
            decrypted += chr((ord(char)-97 - shift) % 26 + 97)
    else:
        decrypted += char

# Write decrypted file
with open("Qu15_decrypted.txt", "w") as f:
    f.write(decrypted)

print("Encryption done -> Qu15_encrypted.txt")
print("Decryption done -> Qu15_decrypted.txt")
