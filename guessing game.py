import random

highest = 10
answer = random.randint(1, highest)
#print(answer)   # TODO: Remove after testing

print("Please guess number between 1 and {}".format(highest))
guess = int(input())

while True:
    if guess < answer:
        print("Nope Sorry, Please guess higher")
    elif guess > answer:  # guess must be greater than answer
        print("Nope Sorry, Please guess lower")
    elif guess == answer:
        print("Horray, correct answer")
        break
    guess = int(input())


