class Student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def calculate_gpa(self):
        try:
            for mark in self.marks.values():
                if mark < 0 or mark > 100:
                    raise ValueError("Invalid marks.")
            avg = sum(self.marks.values()) / len(self.marks)
            gpa = (avg / 100) * 10
            return round(gpa, 2)
        except ValueError as e:
            print("Error:", e)
            return None

try:
    data = {
        "Math": 85,
        "Science": 90,
        "English": 78
    }
    student = Student("Sujal", data)
    print("GPA:", student.calculate_gpa())

    with open("Qu6_student_data.txt", "a") as f:
        f.write(f"{student.name}: {student.calculate_gpa()}")
        
except FileNotFoundError:
    print("Data file not found.")
