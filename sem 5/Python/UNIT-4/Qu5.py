class Media:
	def __init__(self,title,year):
		self.title=title
		self.year=year

class Movie(Media):
	def __init__(self,title,year,genre,rating):
		super().__init__(title,year)
		self.genre=genre
		self.rating=rating

	def recommend(self):
		if self.rating>=5:
			print(f"Watch '{self.title}'! ({self.genre}, Rating: {self.rating})")
		else:
			print(f"'{self.title}' skip it.")

m1 = Movie("RRR", 2020, "Drama", 5.9)
m2 = Movie("KGF", 2021, "Action", 4.2)

m1.recommend()
m2.recommend()