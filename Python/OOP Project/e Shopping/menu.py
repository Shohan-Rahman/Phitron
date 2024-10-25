class Menu:
    def __init__(self) -> None:
        self.items = []
    
    def add_item(self,item):
        self.items.append(item)
        print("Item added successfully.")

    def find_item(self,item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self,item):
        item = self.find_item(item)
        if item:
            self.items.remove(item)
            print(f"{item.name} remove successfully.")
        else:
            print(f"{item.name} is not found.")
    
    def show_item(self):
        print("Name\tPrice\tquantity")
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")