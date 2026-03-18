rg1, rg2 = map(int, input().split())

avail = False
for nm in range(rg1, rg2+1):
    yes = True
    temp = nm
    while temp>0:
        digit = temp%10
        if digit !=4 and digit!=7:
            yes=False
            break
        temp=temp//10
    if yes:
        print(nm, end=" ")
        avail = True

if avail==False:
    print(-1)
