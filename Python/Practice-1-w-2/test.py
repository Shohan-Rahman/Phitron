class Shop:
    def __init__(self,name) -> None:
        self.name = name
        self.products = []
    def add_product(self,name,price,quantity):
        product = Product(name,price,quantity)
        self.products.append(product)
    
    def buy_product(self,name):
        self.name = name
        for item in self.products:
            if name == item.name:
                print(f"Congratulation you buy: {self.name}")
                break
        else:
            print(f'{name} is not in the shop.')
class Product:
    def __init__(self,name,price,quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self) -> str:
        return f"{self.name} {self.price} {self.quantity}"
shop1 = Shop('shopno')
shop1.add_product('soap',30,5)
shop1.add_product('diterjane',80,7)
shop1.add_product('sprey',130,5)

shop1.buy_product('df')