'''
3. Write a list comprehension to print a list which contains the multiplication table of a user entered number.
'''

num = int(input("Enter your Number: "))

l = [i*num for i in range(1, 11)]
print(l)