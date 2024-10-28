from abc import ABC
class Bank:
    def __init__(self,name,amount) -> None:
        self.name = name
        self.amount = amount
        self.total_amount = []
        self.total_loan = []
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
    
    def show_user(self):
        for acc,details in Bank.users.items():
            print(acc,details)
    
    def delete_user(self,acc_num):
        pass

    def total_balance(self):
        pass

    def total_loan_balance(self):
        pass

class Member(User):
    def __init__(self, name, phone, address, email, password) -> None:
        super().__init__(name, phone, address, email, password)
        self.total_amount = 0
        self.history = {}

    def deposit(self,amount):
        self.total_amount += amount
        print(f"{self.name}, you deposit {amount} taka.")
    
    def withdraw(self,amount):
        if amount > self.total_amount:
            print("Withdrawal amount exceeded")
        else:
            self.total_amount -= amount
            print(f"Here is your {amount} taka.")
    
    def show_balance(self):
        print(f"{self.name}, you have {self.total_amount} taka.")

    def transfer(self,acc_num,amount):
        pass

    def transaction_history():
        pass

# sonaly = Bank("Sonaly",10000)

# shohan = Member("Shohan",362,"agar","adhgzabh",123)

# shohan.deposit(5000)
# shohan.deposit(3000)
# shohan.show_balance()
# shohan.withdraw(4000)
# shohan.show_balance()
    
