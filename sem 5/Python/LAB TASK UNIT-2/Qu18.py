user_details={
    "username":"Om",
    "password":"Om@123"
}

for i in range(3):
    u=input("Enter username:")
    p=input("Enter password:")
    if u==user_details["username"] and p==user_details["password"]:
        print("Login successful")
        break
    else:
        print("Invalid credentials, try again.")