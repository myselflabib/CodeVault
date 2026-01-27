'''
A file contains a word “Donkey” multiple times. You need to write a program which replace this word with ##### by updating the same file.
'''

with open("donkey.txt") as f:
    data = f.read()
new_data = data.replace("donkey", "#####")
with open("donkey.txt", "w") as f:
    f.write(new_data)