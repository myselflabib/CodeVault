#number guess problem.
import random
computer = random.randint(1, 100)

count = 0


while(1):
    you = int(input("Enter your number(1 to 100): "))
    if(computer==you):
        count+=1
        break
    elif(you>computer):
        print(f"Enter a number less than {you}")
    else:
        print(f"Enter a number Greater than {you}")
    count+=1

print(f"Congratulations, You Guess the Number in {count} time")