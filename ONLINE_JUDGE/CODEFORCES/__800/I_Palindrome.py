num = number = int(input())


nm = 0
while(num>0):
    nm=(num%10)+(nm*10)
    num=num//10

if number==nm:
    print(nm)
    print("YES")
else:
    print(nm)
    print("NO")