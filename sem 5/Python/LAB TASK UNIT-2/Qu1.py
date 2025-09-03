m1=int(input("Enter marks of subject 1: "))
m2=int(input("Enter marks of subject 2: "))
m3=int(input("Enter marks of subject 3: "))
m4=int(input("Enter marks of subject 4: "))
m5=int(input("Enter marks of subject 5: "))

avg=(m1+m2+m3+m4+m5)/5

if m1<35 or m2<35 or m3<35 or m4<35 or m5<35:
    print("Fail due to subject back")
else:
    if avg>=90 and avg<=100:
        print("Grade: A")
    elif avg>=80 and avg<90:
        print("Grade: B")
    elif avg>=70 and avg<80:
        print("Grade: C")
    elif avg>=60 and avg<70:
        print("Grade: D")
    else:
        print("Grade: Fail")
