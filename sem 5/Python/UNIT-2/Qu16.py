students = {
    "a": [85, 90, 78],
    "b": [70, 88, 92],
    "c": [95, 80, 85]
}

student_averages = {}
for name, marks in students.items():
    average = sum(marks) / len(marks)
    student_averages[name] = average

print("<---Student Averages : --->")
for name, average in student_averages.items():
    print(f"{name}: {average:.2f}")