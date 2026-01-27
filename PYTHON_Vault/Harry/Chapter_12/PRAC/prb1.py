'''
1. Write a program to open three files 1.txt, 2.txt and 3.txt if any these files are not present, a message without exiting the program must be printed prompting the same.
'''

try:
    with open("1.txt") as f:
        f.read()
except FileNotFoundError as e:
    print(e)
try:
    with open("2.txt") as f:
        f.read()
except FileNotFoundError as e:
    print(e)

try:
    with open("3.txt") as f:
        f.read()
except FileNotFoundError as e:
    print(e)