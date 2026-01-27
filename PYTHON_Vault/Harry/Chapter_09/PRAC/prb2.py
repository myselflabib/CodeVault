'''
The game() function in a program lets a user play a game and returns the score
as an integer. You need to read a file ‘Hi-score.txt’ which is either blank or
contains the previous Hi-score. You need to write a program to update the Hi-
score whenever the game() function breaks the Hi-score.
'''

import random

def game():
    print("You're playing")
    score = random.randint(1, 100)
    with open("Hi-score.txt") as f:
        hiscore = f.read()
        if(hiscore!=""):
            hiscore = int(hiscore)
        else:
            hiscore = 0

    print(f"Your score: {score}")
    if(score>hiscore):
        with open("Hi-score.txt", "w") as f:
            f.write(str(score))
    return score


game()
