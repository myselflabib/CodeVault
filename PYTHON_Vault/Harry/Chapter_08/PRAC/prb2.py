def CelToFer(cel):
    return ((cel/5)*9)+32

cel = float(input("Enter celcious: "))
print(round(CelToFer(cel), 2))