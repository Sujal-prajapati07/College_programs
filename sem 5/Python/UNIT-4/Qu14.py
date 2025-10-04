class InsufficientBalanceError(Exception):
    pass

class BankAccount:
    def __init__(self, name, balance=0):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        try:
            assert amount > 0, "Deposit must be positive"
            self.balance += amount
            print(f"Deposited: {amount}. Balance: {self.balance}")

        except AssertionError as e:
            print("Error:", e)

        finally:
            with open("Qu14_transactions.txt", "a") as f:
                f.write(f"Deposit attempt: {amount}, Balance: {self.balance}\n")

    def withdraw(self, amount):
        try:
            assert amount > 0, "Withdrawal must be positive"

            if amount > self.balance:
                raise InsufficientBalanceError("Insufficient balance")
            self.balance -= amount
            print(f"Withdrawn: {amount}. Balance: {self.balance}")

        except (AssertionError, InsufficientBalanceError) as e:
            print("Error:", e)

        finally:
            with open("Qu14_transactions.txt", "a") as f:
                f.write(f"Withdrawal attempt: {amount}, Balance: {self.balance}\n")

name = input("Enter account holder's name: ")
initial_balance = float(input("Enter initial balance: "))

account = BankAccount(name, initial_balance)

while True:
    print("\nOptions:")
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Exit")
    choice = input("Choose an option: ")

    if choice == "1":
        amt = float(input("Enter amount to deposit: "))
        account.deposit(amt)
    elif choice == "2":
        amt = float(input("Enter amount to withdraw: "))
        account.withdraw(amt)
    elif choice == "3":
        print("Exit...")
        break
    else:
        print("Invalid choice!")
