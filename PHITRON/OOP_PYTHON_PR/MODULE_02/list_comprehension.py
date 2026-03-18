num = [45, 76, 778,345,234, 653, 87, 70]

odd =[]

for nu in num:
    if nu%2==1 and nu%5==0:
        odd.append(nu)

print(odd)

odds = [nu for nu in num if nu%2==1]
print(odds)
