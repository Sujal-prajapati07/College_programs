from School.Student import student_info as sd
from School.Teacher import teacher_info as td

student_name=input("Enter the student name : ")
student_age=input("Enter the student age : ")

teacher_name=input("Enter the teacher name : ")
teacher_subject=input("Enter the teacher subject : ")

print("-----------------------------------------------")
sd.student_details(student_name,student_age)
print("-----------------------------------------------")
td.teacher_details(teacher_name,teacher_subject)