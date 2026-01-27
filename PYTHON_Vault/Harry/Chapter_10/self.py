class Employee:
    name = "Labib"
    lang = "py"
    salary = 300000

    def getInfo(self):
        print(f"The name of the Employee is {self.name}\nHe use {self.lang} language\nHis salary is {self.salary}")
        
    @staticmethod
    def greet():
        print("Hello")

Labib = Employee()
Labib.getInfo()
Labib.greet()
# print(Labib.name, Labib.lang, Labib.salary)