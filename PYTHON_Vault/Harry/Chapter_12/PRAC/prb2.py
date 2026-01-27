"""
2. Write a program to print third, fifth and seventh element from a list using enumerate function.
"""

l = [556,445,356,3345,677,356,3566,322,556,246,2577,2335]

for idx, item in enumerate(l):
    if(idx == 2 or idx == 4 or idx == 6):
        print(f"The number at {idx+1} is: {item}")