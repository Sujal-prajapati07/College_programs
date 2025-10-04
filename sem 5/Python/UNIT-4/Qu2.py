class Trip:
	def __init__(self,dest,cost,days):
		self.dest=dest
		self.cost=cost
		self.days=days

class TravelAgency:
	def __init__(self):
		self.trips=[]

	def add_trip(self,trip):
		self.trips.append(trip)

	def expensive_trip(self):
		exp=self.trips[0]
		for t in self.trips:
			if t.cost>exp.cost:
				exp=t
		print("-----------------------------------------------")
		print(f"Most expensive trip : {exp.dest},Cost : {exp.cost},Days : {exp.days}")

agent=TravelAgency()

numberOftrips=int(input("How many Trips?? : "))

for i in range(numberOftrips):
	dest=input("Enter the destination : ")
	cost=float(input("Enter the Cost : "))
	days=int(input("Enter the Duration Days : "))
	agent.add_trip(Trip(dest,cost,days))

agent.expensive_trip()