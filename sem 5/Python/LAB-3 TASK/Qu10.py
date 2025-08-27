def employee_details(**emp_args):
  for key,value in emp_args.items():
    print(f"{key}:{value}")

employee_details(name="kunal",age=25,city="Ahmedabad",salary=50000)