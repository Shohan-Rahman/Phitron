from abc import ABC
import random
class Bank:
    def __init__(self,name,amount) -> None:
        self.name = name
        self.amount = amount
        self.total_amount = amount
        self.total_loan = 0
        self.users = {}
        self.loan_active = True
        self.bankrupt = False

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
        self.active = True
    
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
    
    def turn_on(self,bank):
        bank.loan_active = True
        print("Loan feature is ON.")
    
    def turn_off(self,bank):
        bank.loan_active = False
        print("Loan feature is OFF.")
    
    def bankrupt(self,bank):
        bank.bankrupt = True

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
    
    def withdraw(self,bank,amount):
        if bank.bankrupt:
            print("Please forgive us, we are fokir.")
            return
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

    def loan(self,bank,amount):
        if not bank.loan_active:
            print("Loan feature is currently turned off.")
            return
        if self.loan_count < 2:
            if amount > bank.total_amount:
                print("Amount is too high.")
            else:
                self.total_amount += amount
                self.total_loan += amount
                bank.total_loan += amount
                bank.total_amount -= amount
                self.history.append(f"Your loan {amount} Taka take successfully")
                self.loan_count += 1
                print("Your loan is processed.")
        else:
            print("You have reached the maximum loan limit.")


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
        print("1 : All user")
        print("2 : Delete user")
        print("3 : Total balance of the bank")
        print("4 : Total loan of the bank")
        print("5 : Loan ON/OFF")
        print("6 : Bankrupt")
        print("7 : Logout")

        ch = int(input("Enter option: "))

        if ch == 1:
            admin.show_user(sonaly)
        elif ch == 2:
            ac = int(input("Which account you want to delete: "))
            admin.delete_user(sonaly,ac)  
        elif ch == 3:
            admin.total_balance(sonaly)
        elif ch == 4:
            admin.total_loan_balance(sonaly)
        elif ch == 5:
            print("ON : Are you want to turn ON?")
            print("OFF : Are you want to turn OFF?")
            ch = input("ON/OFF: ")
            if ch.upper() == 'ON':
                admin.turn_on(sonaly)
            elif ch.upper() == 'OFF':
                admin.turn_off(sonaly)
        elif ch == 6:
            admin.bankrupt(sonaly)
        elif ch == 7:
            break
        else:
            print("Invalid option")

def user_menu(user):
    while True:
        print(f"---Welcome {user.name}!!---")
        print("1 : Show account number")
        print("2 : Show total balance")
        print("3 : Show transaction history")
        print("4 : Deposit")
        print("5 : Withdraw")
        print("6 : Transfer money")
        print("7 : Take loan")
        print("8 : Logout")

        ch = int(input("Enter option: "))

        if ch == 1:
            pass
        elif ch == 2:
            user.show_balance()
        elif ch == 3:
            user.transaction_history()
        elif ch == 4:
            amount = int(input("How much money you want to deposit: "))
            user.deposit(amount)
        elif ch == 5:
            amount = int(input("How much money you want to withdraw: "))
            user.withdraw(sonaly,amount)
        elif ch == 6:
            ac = int(input("Which account number you want to transfer: "))
            amount = int(input("How much money you want to transfer: "))
            user.transfer(sonaly,ac,amount)
        elif ch == 7:
            amount = int(input("How much money you want to loan: "))
            user.loan(sonaly,amount)
        elif ch == 8:
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
        print("A : Are you Admin?")
        print("U : Are you User?")
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
    
