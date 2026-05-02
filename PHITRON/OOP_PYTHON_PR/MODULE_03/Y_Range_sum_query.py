n,q=map(int, input().split())
a=list(map(int,input().split()))

pre=[0]*(n+1)

for i in range(1, n+1):
    pre[i]=a[i-1]+pre[i-1]

for i in range(q):
    l,r=map(int, input().split())
    print(pre[r]-pre[l-1])

# print(*pre)

# for i in range(q):
#     l,r=map(int, input().split())
#     sum=0
#     for j in range(l-1, r):
#         sum+=a[j]
#     print(sum)
# print(*a)
