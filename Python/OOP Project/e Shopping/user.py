from abc import ABC
from order import Order
class User(ABC):
    def __init__(self,name,email,phone,address):
        self.name = name
        self.email = email
        self.phone = phone
        self.address = address
    
class Seller(User):
    def __init__(self, name, email, phone, address,age,password):
        super().__init__(name, email, phone, address)
        self.age = age
        self.password = password
    
    def add_item(self,shop,item):
        shop.menu.add_item(item)
    
    def remove_item(self,shop,item):
        shop.menu.remove_item(item)
    
    def show_item(self,shop):
        shop.menu.show_item()

class Customer(User):
    def __init__(self, name, email, phone, address,amount,password):
        super().__init__(name, email, phone, address)
        self.amount = amount
        self.password = password
        self.cart = Order()
    
    def show_item(self,shop):
        shop.menu.show_item()

    def add_to_cart(self,shop,item_name,quantity):
        item = shop.menu.find_item(item_name)
        if item:
            if quantity > item.quantity:
                print("Item quantity excedded.")
            else:
                item.quantity = quantity
                self.cart.add_item(item)
                print("Item add to cart.")
        else:
            print("Item not found.")
    
    def view_cart(self):
        print("****View Cart****")
        print("Name\tPrice\tQuantity")
        for item,quantity in self.cart.items.items():
            print(f"{item.name} {item.price} {quantity}")
            print(f"Total price: {self.cart.total_price}")

    def paybill(self):
        print(f"Your total bill {self.cart.total_price} is paid.")
        self.cart.clear()