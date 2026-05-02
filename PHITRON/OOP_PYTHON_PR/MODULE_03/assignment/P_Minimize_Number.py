n=int(input())
a=list(map(int, input().split()))

def evn():
    ev=True
    for i in a:
        if(i%2!=0):
            ev=False
            break
    return ev

count=0
while True:
    if(evn()==True):
        count+=1
        a=[x/2 for x in a]
    else:
        break

print(count)
