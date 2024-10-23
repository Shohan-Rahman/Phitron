class Menu:
    def __init__(self):
        self.items = []
    
    def add_item(self,item):
        self.items.append(item)
        print("\nItem added successfully")

    def find_item(self,item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self,item):
        item = self.find_item(item)
        if item:
            self.items.remove(item)
            print("Item deleted")
        else:
            print("Item not found.")
    
    def show_item(self):
        print("Name\tPrice\tquantity")
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")