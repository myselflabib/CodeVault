n=int(input())
a=list(map(int, input().split()))

i = a.index(min(a))
j = a.index(max(a))

a[i], a[j] = a[j], a[i]

print(*a)