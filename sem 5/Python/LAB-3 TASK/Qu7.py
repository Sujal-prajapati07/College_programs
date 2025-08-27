def greet(name="kunal"):
    print(f"Hello, {name}!")

name = input("Enter your name: ")
greet(name)

print("Without passing name...")  
greet()