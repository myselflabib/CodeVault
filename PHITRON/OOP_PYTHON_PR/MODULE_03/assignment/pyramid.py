import pyautogui as pg
n=int(input())

for i in range(1, n+1):
    for j in range(i):
        pg.write("#", interval=0.25)
    print()


