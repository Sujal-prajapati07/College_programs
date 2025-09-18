class Teacher:
    def __init__(self):
        self.__name = ""
        self.__subject = ""
        self.__basic = 0.0
        self.__da = 0.0
        self.__hra = 0.0
        self.__salary = 0.0

    def calculateSalary(self):
        self.__salary = self.__basic + self.__da + self.__hra
        return self.__salary

    def readdata(self):
        self.__name = input("Enter the Teacher name: ")
        self.__subject = input("Enter the Subject: ")
        self.__basic = float(input("Enter Basic Salary: "))
        self.__da = float(input("Enter DA: "))
        self.__hra = float(input("Enter HRA: "))

        print("---------------------------------")
        print("Name:", self.__name)
        print("Subject:", self.__subject)
        print("Final Salary:", self.calculateSalary())
        print("---------------------------------")

obj = Teacher()
obj.readdata()
