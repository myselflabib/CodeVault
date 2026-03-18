def sum(num1, num2, num3=0):
    result = num1+num2
    return result

total = sum(99, 11)
print(total)

def all_sum(*num):
    print(num)