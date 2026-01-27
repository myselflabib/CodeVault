'''
Write a program to find out the line number where python is present from ques 6.
'''

with open("log.txt") as f:
    i=0
    for line in f.readlines():
        i+=1
        if("python" in line):
            break
    

print(f"Yes, in line number: {i}")