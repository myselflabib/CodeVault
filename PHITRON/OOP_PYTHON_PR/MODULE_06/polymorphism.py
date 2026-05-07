#poly- many
#morph- shape

class Animal:
    def __init__(self, name):
        self.name = name
    
    def make_sound(self):
        print("Animal making sound")
class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("meow meow")

class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print("Ghew ghew")

don =Cat("Billu")
don.make_sound()

