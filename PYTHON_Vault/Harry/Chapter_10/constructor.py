class Employee:
    # name 
    # lang 
    # salary

    def __init__(self, name, lang, salary):
        self.name = name
        self.lang = lang
        self.salary = salary

        # print("This is constructor")

    def getInfo(self):
        print(f"The name of the Employee is {self.name}\nHe use {self.lang} language\nHis salary is {self.salary}")
        
    @staticmethod
    def greet():
        print("Hello")

Labib = Employee("Labib", "python", "100000")
Labib.getInfo()
Labib.greet()
# print(Labib.name, Labib.lang, Labib.salary)