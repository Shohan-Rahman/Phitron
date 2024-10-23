from bus import Bus,Company
company = Company()

while True:
    print("-------Welcom to our service-------")
    print("\n1 : Install Bus")
    print("2 : View available Bus")
    print("3 : Seat booking")
    print("4 : View available seat")
    print("5 : Exit")

    ch = int(input("Enter your option: "))

    if ch == 1:
        coach = input("Enter coach number: ")
        name = input("Enter name of bus: ")
        departure = input("Enter departure time: ")
        arrival = input("Enter arrival time: ")
        starting = input("Enter starting point: ")
        destination = input("Enter destination point: ")
        bus = Bus(coach,name,departure,arrival,starting,destination)
        company.install_bus(bus)
    elif ch == 2:
        company.available_bus()
    elif ch == 3:
        coach = input("Enter coach number: ")
        seat = int(input("Enter seat number: "))
        company.seat_booking(coach,seat)
    elif ch == 4:
        coach = input("Enter coach number: ")
        company.available_seat(coach)
    elif ch == 5:
        print("Thank you for use our service.")
        break
    else:
        print("Invalid option.")