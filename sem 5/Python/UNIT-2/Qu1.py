n = int(input("How many marks will you enter? "))

marks = []
for i in range(n):
    mark = int(input(f"Enter mark {i + 1}: "))
    marks.append(mark)

average=sum(marks)/n

failed_subjects = 0
for mark in marks:
    if mark < 35:
      failed_subjects += 1

if failed_subjects > 0:
  result = "Fail"
elif average >= 85:
  result = "Pass with Distinction"
elif average >= 50:
  result = "Pass"
else:
  result = "Fail"


print(f"\nAverage Marks: {average:.2f}")
print(f"Result: {result}")
print(f"Number of Failed Subjects: {failed_subjects}")
