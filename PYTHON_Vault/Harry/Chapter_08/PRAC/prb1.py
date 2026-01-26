def GreatNum(a, b, c):
    if(a>b and a>c):
       print(f"{a} is greater than all.")
    elif(b>a and b>c):
       print(f"{b} is greater than all.")
    else:
       print(f"{b} is greater than all.")

a = int(input("Enter The Number: "))
b = int(input("Enter The Number: "))
c = int(input("Enter The Number: "))
GreatNum(a, b, c)