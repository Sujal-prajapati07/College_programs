for i in range(10):
    num = int(input(f"Enter the number {i+1}: "))

    if num > 1:
        for j in range(2, num):
            if num % j == 0:
                break
        else:   
            print(num, "is prime...skipped")
            continue

    if num % 10 == 0:
        print(num, "is divisible by 10...breaking loop")
        break

    print("Accepted number:", num)

else:
    print("finished")
