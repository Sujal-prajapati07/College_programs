class StudentResult:
	def calculatePercentage(self,marks,maximumMarks):
		try:
			if marks<0:
				raise Exception("Marks can not be Negative")
			if marks > maximumMarks:
				raise Exception("Marks cannot exceed maximum marks")

			percentage=(marks/maximumMarks)*100
			print(f"Percentage : {percentage:.2f}%")

		except Exception as e:
			print("Error : ",e)

s=StudentResult()

marks=int(input("Enter the marks : "))
max_marks=int(input("Enter the maximum marks : "))

s.calculatePercentage(marks,max_marks)

