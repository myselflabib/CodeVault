# def doubled(x):
#     return x*2

doubled=lambda num: num*2

# result=doubled(3)

numbers=[23, 56, 344, 45,78,675,443, 766]
doubled_num=map(lambda x: x*2, numbers)
print(list(doubled_num))