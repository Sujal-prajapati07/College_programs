def calculate_average(*args):
    if not args:
        return 0
    return sum(args) / len(args)

print(calculate_average(20, 20, 20))
print(calculate_average(10, 15))
print(calculate_average())   