from shop import Shop
from menu import Menu
from order import Order
from product import Product
from user import Seller,Customer

panda = Shop("Food-Panda")

def sign_in_seller():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    age = input("Enter Your age: ")
    password = input("Enter Your password: ")

    seller = Seller(name=name,email=email,phone=phone,address=address,age=age,password=password)

def sign_in_customer():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    amount = input("Enter Your age: ")
    password = input("Enter Your password: ")

    customer = Customer(name=name,email=email,phone=phone,address=address,amount=amount,password=password)


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
        if ch == 'S':
            sign_in_seller()
        elif ch == 'C':
            sign_in_customer()
        else:
            print("Invalid option.")
    elif ch == 2:
        em = input("Email: ")
        ps = input("Password: ")
        
    else:
        break
