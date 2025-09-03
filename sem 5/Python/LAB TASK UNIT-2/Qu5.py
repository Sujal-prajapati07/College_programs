employee={
    "Sujal":500000,
    "Kunal":45000,
    "Kirtan":35000,
    "Prince":200000
}

for ename in employee:
    if employee[ename]<50000:
        employee[ename]=round(employee[ename]*1.1,2)

new_employee={}

for ename,salary in employee.items():
    if salary<=100000:
        new_employee[ename]=salary

print(new_employee)