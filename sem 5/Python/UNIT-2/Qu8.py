str=input("Enter a string : ")

vowels="AEIOUaeiou"

v_set=set()
for character in str:
  if character in vowels:
    v_set.add(character)

print("Vowels in the string:", v_set)

convert_frozen=frozenset(v_set)
print("Frozen set of vowels:", convert_frozen)