class User:
    def __init__(self, name):
        self.name = name

class Customer(User):
    def __init__(self, name, purchase):
        super().__init__(name)
        self.purchase = purchase
        self.points = 0

    def discount(self):
        return self.purchase * 0.05  # 5% discount

    def add_points(self):
        self.points += int(self.purchase // 10)

class PremiumCustomer(Customer):
    def discount(self):
        return self.purchase * 0.10  # 10% discount

    def add_points(self):
        self.points += int(self.purchase // 5) 

print("------------------------------------------------------")
c1 = Customer("Sujal", 200)
print(f"{c1.name}'s Discount: ${c1.discount()}")
c1.add_points()
print(f"{c1.name}'s Loyalty Points: {c1.points}")

print("------------------------------------------------------")
p1 = PremiumCustomer("Kirtan", 200)
print(f"{p1.name}'s Discount: ${p1.discount()}")
p1.add_points()
print(f"{p1.name}'s Loyalty Points: {p1.points}")
print("------------------------------------------------------")
