total_seats = 20

booked_seats = []

while True:
    seat_num = input("Enter seat number to book (1-20): ")  # keep as string

    if not seat_num.isdigit():
        print("Error: Invalid input!")
        continue

    seat = int(seat_num)  # convert after validation

    if seat < 1 or seat > total_seats:
        print("Error: Seat number out of range!")
    elif seat in booked_seats:
        print("Error: Seat already booked!")
    else:
        booked_seats.append(seat)
        print(f"Seat {seat} successfully booked!")

    another = input("Book another seat? (y/n): ").lower()
    if another != 'y':
        break

print("\nAll booked seats:", booked_seats)
