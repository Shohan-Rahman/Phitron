class Shop:
    # products = []   #class attribute
    def __init__(self,name) -> None:
        self.name = name
        self.products = []   #instance attribute
    def __repr__(self) -> str:
        return f"This is the shop: {self.name}"
    def add_product(self,name,price):
        product = Product(name,price)
        self.products.append(product)
class Product:
    def __init__(self,name,price) -> None:
        self.name = name
        self.price = price
    def __repr__(self) -> str:
        return f"{self.name} - {self.price}"
shopno = Shop("shopno")
shopno.add_product("Chips",100)
shopno.add_product("Biscuit",150)
shopno.add_product("Ghee",200)

agora = Shop("agora")
agora.add_product("Fish",1000)
agora.add_product("Meat",500)
agora.add_product("Veg",300)

print(shopno.products)
print(agora.products)