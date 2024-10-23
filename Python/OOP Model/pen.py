class Pen:
    Manufacture = 'Own Company'
    
    def __init__(self,brand,colour,price):
        self.brand = brand
        self.colour = colour
        self.price = price

pen_1 = Pen('Matador','Black',6)
pen_2 = Pen('Olympic','Green',20)
pen_3 = Pen('Ziska','Deep Black',15)
pen_4 = Pen('Luvena','Red',10)
print(pen_1.brand,pen_1.colour,pen_1.price)
print(pen_2.brand,pen_2.colour,pen_2.price)
print(pen_3.brand,pen_3.colour,pen_3.price)
print(pen_4.brand,pen_4.colour,pen_4.price)