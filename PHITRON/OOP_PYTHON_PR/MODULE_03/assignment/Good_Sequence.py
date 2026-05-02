n=int(input())
a=list(map(int, input().split()))
d={}
for i in a:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

k=0
for x in d:
    if d[x]>=x:
        k+=x

print(n-k)