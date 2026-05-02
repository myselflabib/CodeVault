s=input().split()
r=[]
for i in s:
    r.append(i[::-1])
print(*r)