students = {}

while True:
    print("<---Student Record System--->")
    print("1. Add Student")
    print("2. Update Student")
    print("3. Delete Student")
    print("4. View All Students")
    print("5. Sort by Marks")
    print("6. Exit")

    ch = input("Enter ch: ")

    if ch == '1': 
        name = input("Enter student name: ")
        marks = float(input("Enter marks: "))
        students[name] = marks

    elif ch == '2': 
        name = input("Enter name to update: ")
        if name in students:
            students[name] = float(input("Enter new marks: "))
        else:
            print("Student not found!")

    elif ch == '3':  
        name = input("Enter name to delete: ")
        if name in students:
            del students[name]
        else:
            print("Student not found!")

    elif ch == '4':
        print("\nAll Students:")
        for n, m in students.items(): #items gives key value pairs
            print(n, ":", m)

    elif ch == '5': 
        sorted_students = dict(sorted(students.items(), key=lambda x: x[1], reverse=True))
        print("---Sorted by Marks:---")
        for n, m in sorted_students.items():
            print(n, ":", m)

    elif ch == '6':
        print("Exit")
        break

    else:
        print("Invalid choice!")
