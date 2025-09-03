import random

random_num = random.randint(1, 100)

trial = 10

for attempt in range(1, trial + 1):
    
    guess_num = int(input("Enter the number to guess: "))

    if guess_num == random_num:
        print("Congratulations...You won!")
        break
    elif guess_num < random_num:
        print("Too low...Try again.")
    else:
        print("Too high...Try again.")
else:
    print("Sorry...your attempts are over!")
