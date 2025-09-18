class Paper:
	def __init__(self,width,height):
		self.width=width
		self.height=height

def area(paper):
	return paper.width*paper.height

def perimeter(paper):
	return 2*(paper.width+paper.height)

num1=int(input("Enter the num1 : "))
num2=int(input("Enter the num2 : "))

obj=Paper(num1,num2)

print("Area : ",area(obj))
print("Perimeter : ",perimeter(obj))