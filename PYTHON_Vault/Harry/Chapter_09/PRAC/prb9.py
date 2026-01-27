'''
Write a program to find out whether a file is identical & matches the content of
another file.
'''


with open("this.txt") as f:
    content1 = f.read()

with open("Copy_this.txt") as f:
    content2 = f.read() 

if(content1==content2):
    print("These two file are Identical")
else:
    print("This two file aren't identical")