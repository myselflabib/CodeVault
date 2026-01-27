'''
1. Create a class (2-D vector) and use it to create another class representing a 3-D
vector.
'''

class TwoDVector:
    def __init__(self, i, j):
        self.i = i 
        self.j = j
    def show(self):
        print(f"The TwoD Vector is {self.i}i + {self.j}j")

class ThreeDVector(TwoDVector):
    def __init__(self, i, j, k):
        super().__init__(i, j)
        self.k = k
    
    def show(self):
        print(f"The ThreeD Vector is {self.i}i + {self.j}j + {self.k}k")

a = TwoDVector(1, 2)
b = ThreeDVector(1, 2, 3)

a.show()
b.show()