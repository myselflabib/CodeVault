from abc import ABC, abstractmethod
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print("I need food")
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self, name):
        self.name="monkey"
        super().__init__()

    def eat(self):
        print("se banana khay!!")

    

lyka = Monkey('lyka')

print(lyka.eat())