age = int(input("Enter your age: "))

if(age>=18):
    print("You can vote.")
    print("Vote for Bangladesh")

elif(age<0):
    print("You're entering wrong age. age cannot be negative.")
else:
    print("You can't vote.")
    print(f"You can vote after {18-age} years")

print("End of program.")