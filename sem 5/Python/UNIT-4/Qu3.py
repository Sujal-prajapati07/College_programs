class MenuItem:
    def __init__(self, name, price):
        self.name = name
        self.price = price

    def get(self):
        return self.name, self.price

class Order:
    def __init__(self, tax=0.1):
        self.items = []
        self.tax = tax

    def add_item(self, item):
        name, price = item.get()  # get name and price
        self.items.append(item)
        print(f"Added : {name} - ${price}")

    def total_bill(self):
        total = 0
        for i in self.items:
            name, price = i.get()
            total += price
        return total + (total * self.tax)

    def show_bill(self):
        for i in self.items:
            name, price = i.get()
            print(f"{name} - ${price}")
        print("Total with Tax:", self.total_bill())

#Create MenuItem objects
obj1 = MenuItem("Paneer", 700)
obj2 = MenuItem("Rice", 500)
obj3 = MenuItem("Dal", 600)

#Create order and add items
o = Order(tax=0.05)
o.add_item(obj1)
o.add_item(obj2)
o.add_item(obj3)

#final bill
o.show_bill()
