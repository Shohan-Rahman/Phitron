from abc import ABC
from order import Order
class User(ABC):
    def __init__(self,name,email,phone,address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address

class Employee(User):
    def __init__(self, name, email, phone, address,age,designation,salary):
        super().__init__(name, email, phone, address)
        self.age = age
        self.designation = designation
        self.salary = salary

class Admin(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)

    def add_employee(self,restuarent,employee):
        restuarent.add_employee(employee)
        print("Employee added successfully!!")

    def view_employee(self,restuarent):
        restuarent.view_employee()
    
    def add_new_item(self,restuarent,item):
        restuarent.menu.add_item(item)
    
    def remove_item(self,restuarent,item):
        restuarent.menu.remove_item(item)
        print("Employee remove successfully!!")

    def view_item(self,restuarent):
        restuarent.menu.show_item()


class Customer(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)
        self.cart = Order()
    
    def show_menu(self,restuarent):
        restuarent.menu.show_item()

    def add_to_cart(self,restuarent,item_name,quantity):
        item = restuarent.menu.find_item(item_name)
        
        if item:
            if quantity>item.quantity:
                print("Items quantity exceeded.")
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print("Item added")
        else:
            print("Item not found!")
    
    def view_cart(self):
        print("****View Cart****")
        print("Name\tPrice\tQuantity")
        for item,quantity in self.cart.items.items():
            print(f"{item.name} {item.price} {quantity}")
        print(f"Total price: {self.cart.total_price}")

    def paybill(self):
        print(f"Your total bill {self.cart.total_price} is paid.")
        self.cart.clear()



