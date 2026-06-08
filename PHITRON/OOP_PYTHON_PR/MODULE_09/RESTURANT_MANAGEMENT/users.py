#Customer
# Employee
#Admin

from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name, phone, email, address):
        self.name=name
        self.phone=phone
        self.email=email
        self.address=address
        super().__init__()

class Customer(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, phone, email, address)
        self.cart=None

    def view_menu(self, restaurent):
        restaurent.menu.show_menu()

    def add_to_cart(self, restaurent, item_name):
        item=restaurent.menu.find_item(item_name)
        if item:
            pass
        else:
            print("item not found")
    def view_cart(self):
        print("View cart")
        print("Name\tPrice\tQuantity")
        for item, quantity in self.cart.items.items():
    
        

class Empolyee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        self.age=age
        self.designation=designation
        self.salary=salary
        super().__init__(name, phone, email, address)


# emp = Empolyee('rahim', 'rahim@gmail.com', 12345, 'dhaka', 23, "chef", 120000)

class Admin(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
    

    def add_employee(self, restaurent, employee):
        restaurent.add_employee(employee)
    

    def view_employee(self, restaurent):
        restaurent.view_employee()
    
    def add_new_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)
    def remove_item(self, restaurent, item):
        restaurent.menu.remove_item(item)
        

class Retaurent:
    def __init__(self, name):
        self.name=name
        self.employees = []
        self.menu=FoodItem()
    
    def add_employee(self, employee):
        self.employees.append(employee)

    def view_employee(self):
        print("Employeee list")
        for emp in self.employees:
            print(emp.name, emp.email, emp.phone)


class Menu:
    def __init__(self):
        self.items=[]

    def add_menu_iten(self, item):
        self.items.append(item)
    
    def find_item(self, item_name):
        for item in items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self, item_name):
        item=self.find_item(item_name)
        if item:
            self.items.remove(item)
            print("item deleted")
        else:
            print("Item not found")

    def show_menu(self):
        print("Menu")
        print("Name\tPrice\tQuantity")
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")

        
class FoodItem:
    def __init__(self, name, price, quantity):
        self.name=name
        self.price=price
        self.quantity=quantity



        

# ad= Admin('labib', 12344, 'abc@gamila.co', 'dhaka')
# emp=Empolyee('rahim', 12345, 'rahim@gmail.com',  'dhaka', 23, "chef", 120000)
mn= Menu()
item=FoodItem("Pizza", 200, 4)
mn.add_menu_iten(item)
mn.show_menu()
# emp.view_employee()
