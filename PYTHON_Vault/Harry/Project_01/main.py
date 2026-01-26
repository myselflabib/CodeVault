import random
'''
1 for Rock
2 for Paper
3 for Ciser
'''

computer = random.choice([1,2,3])
youStr = input("Enter your choice(r, p, c): ")
youDic = {"r": 1, "p": 2, "c":3}
reverseDic = {1 : "Rock", 2 : "Paper", 3 : "Ciser"}
you = youDic[youStr]

print("----------------------")
print("----------------------")
print(f"You chose {reverseDic[you]}\nComputer chose {reverseDic
[computer]}")
print("----------------------")

print("======================")

if(computer==you):
    print("----------------------")
    print("This match is Draw.")
    print("----------------------")

else:
    if(computer == 1 and you == 2):
        print("----------------------")
        print("You win")
        print("----------------------")
    elif(computer == 1 and you == 3):
        print("----------------------")
        print("You lose")
        print("----------------------")
    elif(computer == 2 and you == 1):
        print("----------------------")
        print("You lose")
        print("----------------------")
    elif(computer == 2 and you == 3):
        print("----------------------")
        print("You Win")
        print("----------------------")
    elif(computer == 3 and you == 1):
        print("----------------------")
        print("You win")
        print("----------------------")
    elif(computer == 3 and you == 2):
        print("----------------------")
        print("You lose")
        print("----------------------")
    else:
        print("----------------------")
        print("Something went wrong")
        print("----------------------")
