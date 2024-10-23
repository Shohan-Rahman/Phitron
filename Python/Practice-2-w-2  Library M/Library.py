class Book:
    def __init__(self,cate,id,name,quan):
        self.cate = cate
        self.id = id
        self.name = name
        self.quan = quan

class User:
    def __init__(self,id,name,password):
        self.id = id
        self.name = name
        self.password = password

class Library:
    def __init__(self,owner,name):
        self.owner = owner
        self.name = name
        self.users = []
        self.books = []
        self.BorrowBooks = []
        self.ReturnedBooks = []

    def AddUser(self,id,name,password):
        user = User(id,name,password)
        self.users.append(user)
        # print(f"Welcome {name} to our Library")
        return user
    
    def AddBook(self,cate,id,name,quan):
        book = Book(cate,id,name,quan)
        self.books.append(book)
        print(f"\n\t{name} book added.")

    def BorrowBook(self,user,id):
        for book in self.books:
            if book.id == id:
                if book in self.BorrowBooks:
                    print("\n\tAlready borrowed! Try another one.")
                    return
                elif book.quan < 1:
                    print("\n\tNo available copies!")
                    return
                else:
                    self.BorrowBooks.append(book)
                    book.quan -= 1
                    print(f"\n\tSuccessfully borrowed {book.name}")
                    return
        print("\n\tBook not found.")

    def ReturnedBook(self,id):
        for book in self.BorrowBooks:
            if id == book.id:
                self.ReturnedBooks.append(book)
                self.BorrowBooks.remove(book)
                book.quan += 1
                print(f"\n\tYou return Successfully {book.name} book.")
                return
        print("\nThere is no such book to returned.")

hell = Library('Mokchud','Hell Library')
hell.AddBook('Comics',101,'Mr. Bin',5)
hell.AddUser(1,'Admin','Admin')
hell.BorrowBook('Admin',101)

run = True
currentUser = 'admin'

while run:
    if currentUser == None:
        print(f"No Loged in user!")
        
        option = input("Registration or Log in(R/L): ")
        if option == 'R':
            id = int(input("Enter ID: "))
            name = input("Enter Name: ")
            password = input("Enter Password: ")

            user = hell.AddUser(id,name,password)
            currentUser = user
        
        elif option == 'L':
            id = int(input("Enter ID: "))
            password = input("Enter Password: ")

            match = False
            for user in hell.users:
                if id == user.id and password == user.password:
                    currentUser = user
                    match = True
                    break
            if match == False:
                print("\n\tUser not found.")

    else:
        if currentUser == 'admin':
            print("Option:\n")
            print("1 : Add Book\n")
            print("2 : Show Users\n")
            print("3 : Show Books\n")
            print("4 : Logout\n")

            ch = int(input("\nChoose Option: "))
            if ch == 1:
                cate = input("\tCategory of Book: ")
                id = int(input("\tEnter ID: "))
                name = input("\tEnter Name: ")
                quan = input("\tEnter quantity: ")
                hell.AddBook(cate,id,name,quan)

            elif ch == 2:
                for user in hell.users:
                    print(f"user id: {user.id}, name: {user.name}")
        
            elif ch == 3:
                for book in hell.books:
                    print(f"category: {book.cate}, id: {book.id}, book name: {book.name}, quantity: {book.quan}")
        
            else:
                currentUser = None
    
        else:
            print("Option:\n")
            print("1 : Borrow Book\n")
            print("2 : Return Book\n")
            print("3 : Show Borrowed Books\n")
            print("4 : Show Returned Books\n")
            print("5 : Logout\n")

            ch = int(input("\nChoose Option: "))
            if ch == 1:
                id = int(input("Enter book id: "))
                hell.BorrowBook(currentUser,id)
            elif ch == 2:
                id = int(input("Whose book you returned? id: "))
                hell.ReturnedBook(id)
            elif ch == 3:
                for book in hell.BorrowBooks:
                    print(f"\n{book.id}-{book.name}\n")
            elif ch == 4:
                for book in hell.ReturnedBooks:
                    print(f"\n{book.id}-{book.name}\n")
            elif ch == 5:
                currentUser = None