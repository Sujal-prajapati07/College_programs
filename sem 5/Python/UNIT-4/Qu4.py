import datetime

class DatabaseConnection:
	def __init__(self,name):
		self.name=name
		print(f"Connected Database : {self.name}")

	def __del__(self):
		try:
			time = datetime.datetime.now()
			print(f"Database '{self.name}' closed at {time}")
			with open("Qu4.txt","a") as f:
				f.write(f"Database '{self.name}' closed at {time}")
		except Exception as e:
			pass

db=DatabaseConnection("MySql")

del db