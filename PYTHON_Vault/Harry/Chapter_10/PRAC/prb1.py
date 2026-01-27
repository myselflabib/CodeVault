class Programmer:
    company = "Microsoft"
    def __init__(self, name, salary, pin):
        self.name = name
        self.salary = salary
        self.pin = pin

p = Programmer("Labib", 12000, 25001)
print(p.name, p.salary, p.pin)

