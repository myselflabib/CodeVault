n=int(input())
a=list(map(int, input().split()))
d={}
for i in a:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

for i in d:
    print(d[i], end=" ")