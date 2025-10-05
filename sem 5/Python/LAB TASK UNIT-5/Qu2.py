class Course:
    def __init__(self, name, prerequisites):
        self.name = name
        self.prerequisites = prerequisites

class Student:
    def __init__(self, name, completed_courses):
        self.name = name
        self.completed_courses = completed_courses

class Admission:
    def __init__(self, courses):
        self.courses = {course.name: course for course in courses}

    def apply(self, student, course_name):
        if course_name not in self.courses:
            raise Exception("Invalid course selection.")

        course = self.courses[course_name]

        for prereq in course.prerequisites:
            if prereq not in student.completed_courses:
                raise Exception("Missing prerequisite: " + prereq)
        print(f"{student.name} is admitted to {course.name}")

courses = [
    Course("Computer Science", ["Math"]),
    Course("Math", [""]),
    # Course("Math", ["Math"]),
    Course("Physics", ["Math"])
]

student1 = Student("Sujal", ["Math"])
student2 = Student("Kirtan", [""])
# student2 = Student("Kirtan", ["Math"])

admission = Admission(courses)     

try:
    admission.apply(student1, "Computer Science") 
except Exception as e:
    print("Admission Error:", e)

try:
    admission.apply(student2, "Physics")          
except Exception as e:
    print("Admission Error:", e)
