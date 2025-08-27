def simple_interest(principal, time, rate=5):
    return (principal * rate * time) / 100

principal = int(input("Enter the principal amount: "))
time = int(input("Enter the time (in years): "))
rate = float(input("Enter the rate of interest (default is 5%): ") or 5)

interest = simple_interest(principal, time, rate)
print(f"The simple interest is: {interest}")