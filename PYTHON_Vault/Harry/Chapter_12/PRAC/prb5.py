'''
5. Store the multiplication tables generated in problem 3 in a file named Tables.txt
'''


num = int(input("Enter your Number: "))

l = [i*num for i in range(1, 11)]
with open("table.txt", "a") as f:
    f.write(f"Table of {num} is: {l}\n")