'''
Write a class “Calculator” capable of finding square, cube and square root of a number.
'''

class Calculator:
    def __init__(self, num):
        self.num = num
    
    def Square(self):
        print(f"The square is {self.num*self.num}")
    def Cube(self):
        print(f"The cube is {self.num*self.num*self.num}")
    def SqRoot(self):
        print(f"The cube is {self.num**(1/2)}")


cal = Calculator(4)
cal.Square()
cal.Cube()
cal.SqRoot()
