'''
Add a static method in problem 2, to greet the user with hello.
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

    @staticmethod
    def greet():
        print("Hello")


cal = Calculator(4)
cal.greet()
cal.Square()
cal.Cube()
cal.SqRoot()
