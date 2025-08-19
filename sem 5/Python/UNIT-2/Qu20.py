bank = {101: 5000, 102: 3000, 103: 7000}

while True:
    print("1.Deposit\n")
    print("2.Withdraw\n")
    print("3.Balance\n")
    print("4.Exit\n")

    choice = int(input("Enter choice: "))
  
    acc = int(input("Enter account number: "))
    if acc not in bank:
        print("Account not found!")
        continue
    
    if choice == 1:
        bank[acc] += float(input("Enter deposit amount: "))

    elif choice == 2:
        amt = float(input("Enter withdrawal amount: "))
        if amt <= bank[acc]:
            bank[acc] -= amt
        else:
            print("Insufficient balance!")

    elif choice == 3:
        print("Balance:", bank[acc])

    elif choice == 4:
        print("Exiting...")
        break
