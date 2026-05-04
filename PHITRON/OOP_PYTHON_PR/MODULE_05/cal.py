class calculator:
    Brand="CASIO ES991"

    def add(self,a,b):
        return a+b
    
    def deduct(self,a,b):
        return a-b
    
    def mul(self,a,b):
        return a*b

    def division(self,a,b):
        return a/b
    
cal=calculator()
print(cal.add(4,6))
print(cal.deduct(7,8))
print(cal.mul(8,9))
print(cal.division(6,3))