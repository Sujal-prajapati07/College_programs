class InsufficientBalance(Exception):
    pass

class InvalidTransaction(Exception):
    pass

class Account:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        if amount <= 0:
            raise InvalidTransaction("Deposit amount must be positive.")
        self.balance += amount

    def withdraw(self, amount):
        if amount > self.balance:
            raise InsufficientBalance("Not enough balance.")
        self.balance -= amount

    def transfer(self, target, amount):
        self.withdraw(amount)
        target.deposit(amount)

class SavingsAccount(Account):
    pass

class CurrentAccount(Account):
    pass

name1 = input("Enter name for Savings Account: ")
bal1 = float(input("Enter initial balance: "))
a1 = SavingsAccount(name1, bal1)

name2 = input("Enter name for Current Account: ")
bal2 = float(input("Enter initial balance: "))
a2 = CurrentAccount(name2, bal2)

try:
    dep = float(input(f"Enter deposit amount for {a1.name}: "))
    a1.deposit(dep)

    wd = float(input(f"Enter withdrawal amount for {a1.name}: "))
    a1.withdraw(wd)

    tr = float(input(f"Enter transfer amount from {a1.name} to {a2.name}: "))
    a1.transfer(a2, tr)

    print(f"{a1.name} Balance:", a1.balance)
    print(f"{a2.name} Balance:", a2.balance)
except (InsufficientBalance, InvalidTransaction) as e:
    print("Error:", e)
