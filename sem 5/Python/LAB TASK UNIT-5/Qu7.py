class OverbookError(Exception):
    pass

class InvalidSeatError(Exception):
    pass

class Movie:
    def __init__(self, title):
        self.title = title 

class Theater:
    def __init__(self, seats):
        self.seats = seats  
        self.booked = []    

class Booking:
    def __init__(self, movie, theater):
        self.movie = movie
        self.theater = theater

    def book(self, s):
        if s < 1 or s > self.theater.seats:
            raise InvalidSeatError("Invalid seat.")
        if s in self.theater.booked:
            raise OverbookError("Seat already booked.")
        self.theater.booked.append(s)
        print("---------------------")
        print(f"Seat {s} booked for {self.movie.title}.")

    def cancel(self, s):
        if s in self.theater.booked:
            self.theater.booked.remove(s)
            print(f"Seat {s} canceled.")
        else:
            print("Seat not booked.")

    def view(self):
        print("Booked seats:", self.theater.booked)

movie = Movie("Iron Man")
theater = Theater(5)
book_ticket = Booking(movie, theater)

try:
    book_ticket.book(1)
    book_ticket.book(2)
    book_ticket.book(1)
except (OverbookError, InvalidSeatError) as e:
    print("Error:", e)

print("---------------------")
book_ticket.view()
book_ticket.cancel(2)
book_ticket.view()
print("---------------------")