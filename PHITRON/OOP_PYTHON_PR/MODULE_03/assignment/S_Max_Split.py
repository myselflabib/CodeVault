s=input()
bal=0
c=""
r=[]
for i in range(0, len(s)):
    c+=s[i]
    if s[i]=="L":
        bal+=1
    else:
        bal-=1
    
    if bal==0:
        r.append(c)
        c=""
print(len(r))
for i in range(len(r)):
    print(r[i])