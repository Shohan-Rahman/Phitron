class Bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000
    
    def get_balance(self):
        return self.balance
    
    def deposite(self,amount):
        if amount > 0:
            self.balance += amount

    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print(f'Your balance is less than {self.min_withdraw}')
        elif amount > self.max_withdraw:
            print(f'Your balance is more than {self.max_withdraw}')
        else:
            self.balance -= amount
            print(f'Here is your money {amount}')
            print(f'Now your balance is {self.get_balance()}')

DBBL = Bank(50000)
DBBL.deposite(5000)
DBBL.withdraw(50)
DBBL.withdraw(1000000)
DBBL.withdraw(25000)