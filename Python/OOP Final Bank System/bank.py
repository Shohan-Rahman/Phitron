from abc import ABC
import random
class Bank:
    def __init__(self,name,amount) -> None:
        self.name = name
        self.amount = amount
        self.total_amount = amount
        self.total_loan = 0
        self.users = {}

class User(ABC):
    def __init__(self,name,phone,address,email,password) -> None:
        self.name = name
        self.phone = phone
        self.address = address
        self.email = email
        self.password = password

class Admin(User):
    def __init__(self, name, phone, address, email, password) -> None:
        super().__init__(name, phone, address, email, password)
    
    def show_user(self,bank):
        for acc,details in bank.users.items():
            print(f"Account Number: {acc} - Name: {details.name}, Address: {details.address}, Email: {details.email}, Total amount: {details.total_amount}, Total loan: {details.total_loan}")
    
    def delete_user(self,bank,acc_num):
        if acc_num in bank.users:
            user = bank.users[acc_num]
            bank.total_amount -= user.total_amount
            del bank.users[acc_num]
            print(f"Account {acc_num} has been deleted.")
        else:
            print("This account number is not valid.") 

    def total_balance(self,bank):
        print(f"Total amount of this bank is {bank.total_amount} taka")

    def total_loan_balance(self,bank):
        print(f"Total loan is {bank.total_loan} taka")

class Member(User):
    def __init__(self, name, phone, address, email, password) -> None:
        super().__init__(name, phone, address, email, password)
        self.total_amount = 0
        self.total_loan = 0
        self.loan_count = 0
        self.history = []

    def add_member(self,bank):
        acc_num = self.account_number()
        bank.users[acc_num] = self
        print(f"{self.name}'s account created with Account Number: {acc_num}")

    def account_number(self):
        return random.randint(104200002601,104200002700)

    def deposit(self,amount):
        self.total_amount += amount
        self.history.append(f"Deposited {amount} taka")
        print(f"{self.name}, you deposit {amount} taka.")
    
    def withdraw(self,amount):
        if amount > self.total_amount:
            print("Withdrawal amount exceeded")
        else:
            self.total_amount -= amount
            self.history.append(f"Withdrew {amount} taka")
            print(f"Here is your {amount} taka.")
    
    def show_balance(self):
        print(f"{self.name}, you have {self.total_amount} taka.")

    def transfer(self,bank,acc_num,amount):
        if amount > self.total_amount:
            print("Insufficient balance for transfer.")
        elif acc_num not in bank.users:
            print("Account does not exist.")
        else:
            self.total_amount -= amount
            bank.users[acc_num].total_amount += amount
            self.history.append(f"Transferred {amount} taka to account {acc_num}")
            bank.users[acc_num].history.append(f"Received {amount} taka from account {self.account_number()}")
            print(f"Transferred {amount} taka to account {acc_num}.")

    def transaction_history(self):
        print(f"Transaction history for {self.name}:")
        for entry in self.history:
            print(entry)

class Verification:
    def __init__(self) -> None:
        self.admin_emails = {}
        self.user_emails = {}
    
    def admin_add_email(self,email,password):
        self.admin_emails[email] = password
    
    def user_add_email(self,email,password):
        self.user_emails[email] = password
    
    def check_email_admin(self,email,password):
        for em,ps in self.admin_emails.items():
            if em == email and ps == password:
                return True
            else:
                return False
    
    def check_email_user(self,email,password):
        for em,ps in self.user_emails.items():
            if em == email and ps == password:
                return True
            else:
                return False

sonaly = Bank("Sonaly",10000)
v = Verification()

def sign_in_admin():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    password = input("Enter Your password: ")

    v.admin_add_email(email,password)
    return Admin(name=name,phone=phone,address=address,email=email,password=password)

def sign_in_user():
    name = input("Enter Your Name: ")
    email = input("Enter Your Email: ")
    phone = input("Enter Your Phone: ")
    address = input("Enter Your address: ")
    password = input("Enter Your password: ")

    v.user_add_email(email,password)
    return Member(name=name,phone=phone,address=address,email=email,password=password)

def admin_menu(admin):
    while True:
        print(f"---Welcome {admin.name}!!---")
        print("1 : Delete user")
        print("2 : All user")
        print("3 : Total balance of the bank")
        print("4 : Total loan of the bank")
        print("5 : Loan ON")
        print("6 : Loan OFF")

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

def user_menu(user):
    while True:
        print(f"---Welcome {user.name}!!---")
        print("1 : Show account number")
        print("2 : Show total balance")
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
    print(f"------Welcome to our Bank service-------")
    print("1 : Sign in")
    print("2 : Log in")
    print("3 : Exit")

    ch = int(input("Enter option: "))

    if ch == 1:
        print("S : Are you Admin?")
        print("C : Are you User?")
        ch = input("A/U: ")
        if ch.upper() == 'A':
            admin = sign_in_admin()
        elif ch.upper() == 'U':
            user = sign_in_user()
            user.add_member(sonaly)
        else:
            print("Invalid option.")
    elif ch == 2:
        em = input("Email: ")
        ps = input("Password: ")
        if v.check_email_admin(em,ps) == True:
            admin_menu(admin)
        elif v.check_email_user(em,ps) == True:
            user_menu(user)
        else:
            print("Invalid email or password.")
                
    elif ch == 3:
        print("Thank you for visiting! Goodbye!")
        break

    else:
        print("Invalid option.")
    
