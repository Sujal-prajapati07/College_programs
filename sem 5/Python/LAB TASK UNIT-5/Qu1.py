import csv

class Expense:
    def __init__(self, date, category, amount):
        self.date = date
        self.category = category
        self.amount = amount

class ExpenseManager:
    def __init__(self, filename="Qu1_Expense.csv"):
        self.filename = filename

    def add_expense(self, expense):
        try:
            amount = float(expense.amount) #must be a number
            with open(self.filename, "a", newline="") as f:
                writer = csv.writer(f)
                writer.writerow([expense.date, expense.category, amount])
            print("Expense added successfully!...")
        except ValueError:
            print("Please enter a number.")

    def view_expenses(self):
        try:
            with open(self.filename, "r") as f:
                reader = csv.reader(f)
                for row in reader:
                    print("\t".join(row))
        except FileNotFoundError:
            print("No expenses found!...")

    def delete_expense(self, date):
        try:
            with open(self.filename, "r") as f:
                rows = list(csv.reader(f))  #Read all rows first
            with open(self.filename, "w", newline="") as f:
                writer = csv.writer(f)
                for row in rows:
                    if row[0] != date: #Deletes record by date
                        writer.writerow(row) #Adds expense data to the file
            print("Expense deleted (if existed).")
        except FileNotFoundError:
            print("No expense file found!")

# Main program
obj = ExpenseManager()

while True:
    print("1.Add Expense")
    print("2.View Expense")
    print("3.Delete Expense")
    print("4.Exit")
    
    ch = input("Enter choice: ")

    if ch == "1":
        d = input("Enter date: ")
        c = input("Enter category: ")
        a = input("Enter amount: ")
        e = Expense(d, c, a)
        obj.add_expense(e)
    elif ch == "2":
        obj.view_expenses()
    elif ch == "3":
        d = input("Enter date to delete: ")
        obj.delete_expense(d)
    elif ch == "4":
        break
    else:
        print("Invalid choice!")
