students = {
    "Umesh": {"Science": 80, "English": 75},
    "Prince": {"Math": 55, "Hindi": 60},
    "Hemant": {"Science": 78, "English": 72}
}

print("--------------------------------------")
students["Ansh"]={}
students["Ansh"]["Science"] = 88
print("After adding:", students)

print("--------------------------------------")
students["Prince"]["Math"] = 95
print("After updating:", students)

del students["Hemant"]["English"]

print("--------------------------------------")
print("New Dictionary:")
for student, subjects in students.items():
    print(student, ":", subjects)
