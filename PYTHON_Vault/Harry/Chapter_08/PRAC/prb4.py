def sumOfNatu(n):
    if(n==1):
        return 1
    return sumOfNatu(n-1)+n

print(sumOfNatu(5))