'''
Create a class ‘Employee’ and add salary and increment properties to it.
Write a method ‘salaryAfterIncrement’ method with a @property decorator with a setter
which changes the value of increment based on the salary.
'''

class Employee:
    def __init__(self, salary, increment):
        self.salary = salary
        self.increment = increment


    
    @property
    def salaryAfterIncrement(self):
        return self.salary+(self.increment*self.salary)/100
    
e = Employee(1200, 5)
print(e.salaryAfterIncrement)
