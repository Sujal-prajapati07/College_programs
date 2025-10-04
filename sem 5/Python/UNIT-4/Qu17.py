class Book:
    def __init__(self, title):
        self.title = title
        self.available = True

class Member:
    def __init__(self, name):
        self.name = name
        self.books_issued = []

    def issue_book(self, book):
        if book.available:
            book.available = False
            self.books_issued.append(book)
            print(f"{self.name} issued '{book.title}'")
        else:
            print(f"'{book.title}' is already issued!")

    def return_book(self, book):
        if book in self.books_issued:
            book.available = True
            self.books_issued.remove(book)
            print(f"{self.name} returned '{book.title}'")
        else:
            print(f"{self.name} did not borrow '{book.title}'")

class Transaction:
    def show_books(self, books):
        print("\n--- Book Status ---")
        for b in books:
            status = "Available" if b.available else "Issued"
            print(f"{b.title} - {status}")

b1 = Book("Python")
b2 = Book("Java")
books = [b1, b2]

m1 = Member("Sujal")
m2 = Member("Kirtan")

m1.issue_book(b1)
m2.issue_book(b1)
m2.issue_book(b2)

m1.return_book(b1)
m2.return_book(b2)

t = Transaction()
t.show_books(books)
