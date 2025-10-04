class Doctor:
	def __init__(self,name,spec):
		self.name=name
		self.spec=spec

	def __str__(self):
		return f"Dr. {self.name} ({self.spec})"

class Patient:
	def __init__(self,name,age):
		self.name=name
		self.age=age

	def __str__(self):
		return f"{self.name}, Age: {self.age}"

class Appointments:
	def __init__(self):
		self.appointment=[]

	def schedule(self,doctor,patient,time):
		self.appointment.append((doctor,patient,time))#appointment add as tuple
		print("-----------------------------------------------------------")
		print(f"Appointment : {patient} with {doctor} at {time}")

	def daily(self):
		if not self.appointment:
			print("No Appointments")
			return

		for doctor,patient,time in self.appointment:
			print("-----------------------------------------------------------")
			print(f"Time : {time},Doctor : {doctor},Patient : {patient}")

d1=Doctor("Sujal","Neurologist")
d2=Doctor("Kirtan","Pathology")

p1=Patient("Nihir",25)
p2=Patient("Manan",20)
p3=Patient("Purav",22)

hospital=Appointments()

hospital.schedule(d1,p1,"9:00 AM")
hospital.schedule(d2,p2,"12:00 PM")
hospital.schedule(d1,p3,"5:00 PM")

hospital.daily()