# for i in range(3, 1):
#     print("*"*i)
#     print("")

def pattern(n):
    if(n==0):
        return
    print("*"*n)
    pattern(n-1)

pattern(int(input()))