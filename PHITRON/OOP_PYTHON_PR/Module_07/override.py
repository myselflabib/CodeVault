class Person:
    def __init__(self, name , age, height):
        self.name=name
        self.age=age
        self.height=height

    def eat(self):
        print("Vat khay")


class Cricketer(Person):
    def __init__(self, name, age, height, team):
        self.team=team
        super().__init__(name, age, height)


mustafiz=Cricketer



# method overload
# dunder methoddd

# __add__
# __mul__
# __gt__