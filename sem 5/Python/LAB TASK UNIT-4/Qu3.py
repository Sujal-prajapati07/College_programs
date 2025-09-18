class Bank:
    def __init__(self,bid,name):
        self.__id=bid
        self._name=name
        self.balance=1000

    def getId(self):
        return self.__id

    def getName(self):
        return self._name

class Customer(Bank):
    def withdraw(self,amount):
        if amount <= self.balance:
            self.balance=self.balance-amount
            print("withdraw : ",amount)
        else:
            print("Insufficient balance")

    def deposit(self, amount):
        self.balance += amount
        print("Deposite : ",amount)

    def interest_calculate(self, rate, years):
        interest = (self.balance * rate * years) / 100
        self.balance += interest
        print("Interest added: ",interest)

bid=int(input("Enter the id : "))
name=input("Enter the name : ")

obj=Customer(bid,name)

print("Current Balance : ",obj.balance)

obj.deposit(5000)
obj.withdraw(3000)
obj.interest_calculate(5,2) # 5%,2 years

print("---------------------------------")
print("Bank id : ",obj.getId())
print("Customer Name : ",obj.getName())
print("Final Balance : ",obj.balance)
print("---------------------------------")