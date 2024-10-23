total = 0
cost = 0
class shopping:
    def __init__(self,name):
        self.name = name
        self.cart = []

    def add_to_cart(self,item,price,quantity):
        product = {'item': item,'price': price,'quantity': quantity}
        self.cart.append(product)

    def check_out(self,amount):
        global total
        global cost
        for item in self.cart:
            total += item['price'] * item['quantity']
        print(f'You remove {cost} taka.')
        print(f'Your total price is: {total} taka.')
        if total > amount:
            print(f'Please provide {total-amount} taka more money.')
        else:
            print(f'Here is your product and extra money {amount-total} taka.')

    def remove_item(self,item):
        global total
        global cost
        for name in self.cart:
            if item in name['item']:
                cost += name['price'] * name['quantity']
        total = total-cost

person = shopping('Hati')
person.add_to_cart('chips',50,5)
person.add_to_cart('cake',150,3)
person.add_to_cart('noodles',80,7)
person.add_to_cart('ice-cream',30,10)
person.add_to_cart('air-freashner',280,5)

# print(person.cart)
person.remove_item('chips')
person.remove_item('noodles')
person.check_out(5000)