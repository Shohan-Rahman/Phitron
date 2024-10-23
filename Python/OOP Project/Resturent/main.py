from users import User,Customer,Admin,Employee
from menu import Menu
from order import Order
from restuarent import Restuarent
from food_item import FoodItem

Ghorua = Restuarent("Ghorua")
def customer_menu():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")

    customer = Customer(name=name,email=email,phone=phone,address=address)

    while True:
        print(f"---Welcome {customer.name}!!---")
        print("1 : View menu")
        print("2 : Add to cart")
        print("3 : View cart")
        print("4 : PayBill")
        print("5 : Logout")

        ch = int(input("Enter option: "))

        if ch == 1:
            customer.show_menu(Ghorua)
        elif ch == 2:
            item = input("Enter item name: ")
            qu = int(input("Enter how much you want: "))
            customer.add_to_cart(Ghorua,item,qu)
        elif ch == 3:
            customer.view_cart()
        elif ch == 4:
            customer.paybill()
        elif ch == 5:
            break
        else:
            print("Invalid option")

def admin_menu():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")

    admin = Admin(name=name,email=email,phone=phone,address=address)

    while True:
        print(f"---Welcome {admin.name}!!---")
        print("1 : Add Employee")
        print("2 : Add new item")
        print("3 : View Employee")
        print("4 : View item")
        print("5 : Remove item")
        print("6 : Exit")

        ch = int(input("Enter option: "))

        if ch == 1:
            name = input("Enter Name: ")
            email = input("Enter Email: ")
            phone = input("Enter Phone: ")
            address = input("Enter address: ")
            age = int(input("Enter age: "))
            designation = input("Enter designation: ")
            salary = int(input("Enter salary: "))
            emp = Employee(name,email,phone,address,age,designation,salary)
            admin.add_employee(Ghorua,emp)
        elif ch == 2:
            item_name = input("Enter item name: ")
            price = int(input("Enter price: "))
            qu = int(input("Enter quantity: "))
            item = FoodItem(item_name,price,qu)
            admin.add_new_item(Ghorua,item)
        elif ch == 3:
            admin.view_employee(Ghorua)
        elif ch == 4:
            admin.view_item(Ghorua)
        elif ch == 5:
            item = input("Enter item name: ")
            admin.remove_item(Ghorua,item)
        elif ch == 6:
            break
        else:
            print("Invalid option")

while True:
    print("WELCOME")
    print("1 : Customer")
    print("2 : Admin")
    print("3 : Exit")

    ch = int(input("Enter option: "))

    if ch == 1:
        customer_menu()
    elif ch == 2:
        admin_menu()
    else:
        break
