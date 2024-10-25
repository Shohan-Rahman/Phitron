from shop import Shop
from menu import Menu
from order import Order
from product import Product
from user import Seller,Customer
from verification import Verification

panda = Shop("Food-Panda")
v = Verification()

def sign_in_seller():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    age = input("Enter Your age: ")
    password = input("Enter Your password: ")

    v.s_add_email(email,password)
    return Seller(name=name,email=email,phone=phone,address=address,age=age,password=password)

def sign_in_customer():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    amount = input("Enter Your age: ")
    password = input("Enter Your password: ")

    v.c_add_email(email,password)
    return Customer(name=name,email=email,phone=phone,address=address,amount=amount,password=password)

def seller_menu(seller):
    while True:
        print(f"---Welcome {seller.name}!!---")
        print("1 : Add item")
        print("2 : Remove item")
        print("3 : Show item")
        print("4 : Logout")

        ch = int(input("Enter option: "))

        if ch == 1:
            item_name = input("Enter item name: ")
            price = int(input("Enter price: "))
            qu = int(input("Enter quantity: "))
            item = Product(item_name,price,qu)
            seller.add_item(panda,item)
        elif ch == 2:
            item = input("Enter item name: ")
            seller.remove_item(panda,item)
        elif ch == 3:
            seller.show_item(panda)
        elif ch == 4:
            break
        else:
            print("Invalid option")

def customer_menu(customer):
    while True:
        print(f"---Welcome {customer.name}!!---")
        print("1 : Show item")
        print("2 : Add to cart")
        print("3 : View cart")
        print("4 : PayBill")
        print("5 : Logout")

        ch = int(input("Enter option: "))

        if ch == 1:
            customer.show_item(panda)
        elif ch == 2:
            item = input("Enter item name: ")
            qu = int(input("Enter how much you want: "))
            customer.add_to_cart(panda,item,qu)
        elif ch == 3:
            customer.view_cart()
        elif ch == 4:
            customer.paybill()
        elif ch == 5:
            break
        else:
            print("Invalid option")
            
while True:
    print("------Welcome to our Shop-------")
    print("1 : Sign in")
    print("2 : Log in")
    print("3 : Exit")

    ch = int(input("Enter option: "))

    if ch == 1:
        print("S : Are you Seller?")
        print("C : Are you Customer?")
        ch = input("S/C: ")
        if ch.upper() == 'S':
            seller = sign_in_seller()
        elif ch.upper() == 'C':
            customer = sign_in_customer()
        else:
            print("Invalid option.")
    elif ch == 2:
        em = input("Email: ")
        ps = input("Password: ")
        if v.check_email_seller(em,ps) == True:
            seller_menu(seller)
        elif v.check_email_customer(em,ps) == True:
            customer_menu(customer)
        else:
            print("Invalid email or password.")
                
    elif ch == 3:
        print("Thank you for visiting! Goodbye!")
        break

    else:
        print("Invalid option.")
