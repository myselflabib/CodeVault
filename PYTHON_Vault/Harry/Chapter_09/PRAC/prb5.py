# Repeat program 4 for a list of such words to be censored.
words = ["donkey", "kharap", "beyadob", "bodmash"]

with open("donkey.txt") as f:
    data = f.read()

for word in words:
    data = data.replace(word, "#"*len(word))

with open("donkey.txt", "w") as f:
    f.write(data)