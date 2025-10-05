class EmptyRecommendationError(Exception):
    pass

class InvalidRatingError(Exception):
    pass

class Book:
    def __init__(self, title, author, genre, rating):
        if rating < 0 or rating > 5:
            raise InvalidRatingError("Rating must be 0-5")
        self.title = title
        self.author = author
        self.genre = genre
        self.rating = rating

class RecommendationEngine:
    def __init__(self, books):
        self.books = books

    def genre(self, genre):
        rec = []
        for b in self.books:
            if b.genre.lower() == genre.lower():
                rec.append(b)
        if not rec:
            raise EmptyRecommendationError("No books for this genre")
        return rec

    def author(self, author):
        rec = []
        for b in self.books:
            if b.author.lower() == author.lower():
                rec.append(b)
        if not rec:
            raise EmptyRecommendationError("No books for this author")
        return rec

    def rating(self, rating):
        if rating < 0 or rating > 5:
            raise InvalidRatingError("Rating must be 0-5")
        rec = []
        for b in self.books:
            if b.rating >= rating:
                rec.append(b)
        if not rec:
            raise EmptyRecommendationError("No books with this rating")
        return rec

books = []
try:
    books.append(Book("Book A", "Author Sujal", "Fiction", 5.5))  # Invalid rating
except InvalidRatingError as e:
    print("Error:", e)

#generate error
try:
    books.append(Book("Book B", "Author Kirtan", "Science", 3.0))
    books.append(Book("Book C", "Author Purav", "Fiction", 4.5))
    print("----------------------------")
except InvalidRatingError as e:
    print("Error:", e)

engine = RecommendationEngine(books)

try:
    for b in engine.genre("Fiction"):
        print(b.title, "-", b.author, "-", b.rating)
except EmptyRecommendationError as e:
    print("Error:", e)
