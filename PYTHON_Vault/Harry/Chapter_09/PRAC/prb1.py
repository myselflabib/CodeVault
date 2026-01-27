'''
Write a program to read the text from a given file ‘poems.txt’ and find out whether it contains the word ‘twinkle’.

'''

f = open("poems.txt")
data = f.read()
if("twinkle" in data.lower()):
    print("Twinke is in the file")
else:
    print("Twinke isn't in the file")

f.close()
