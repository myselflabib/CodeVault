'''
Write a program to mine a log file and find out whether it contains ‘python’.
'''

with open("log.txt") as f:
    data = f.read()

if("python" in data):
    print("Yes, python is present")
else:
    print("No, Python is not present")