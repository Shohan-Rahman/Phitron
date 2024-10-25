from menu import Menu
class Shop:
    def __init__(self,name) -> None:
        self.name = name
        self.sellers = []
        self.menu = Menu()

    def add_seller(self,seller):
        self.sellers.append(seller)
    
    def view_seller(self):
        for seller in self.sellers:
            print(seller.name, seller.email, seller.phone, seller.address)

    
    
    