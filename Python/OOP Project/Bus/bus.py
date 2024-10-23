from abc import ABC,abstractmethod
class Bus(ABC):
    def __init__(self,coach,name,departure,arrival,starting,destination) -> None:
        self.coach = coach
        self.name = name
        self.departure = departure
        self.arrival = arrival
        self.starting = starting
        self.destination = destination
        self.seats = ["Empty" for _ in range(20)]
        
class AbstractBus(Bus):
    pass

class Company:
    def __init__(self) -> None:
        self.buses = {}
    
    def install_bus(self,bus):
        self.buses[bus.coach] = bus     # ekhane coach number er under a bus thakbe
        print(f"Bus {bus.coach} is installed successfully.") # [1 : Purbasha 9:00 3:00 Dhaka Jhenaidah]
    
    def available_bus(self):
        if not self.buses:
            print("There is no bus available.")
        else:
            print(f"Coach\tName\tDeparture\tArrival\tFrom\tTo")
            for coach,bus in self.buses.items():
                print(f"{coach}\t{bus.name}\t{bus.departure}\t{bus.arrival}\t{bus.starting}\t{bus.destination}")
    
    def seat_booking(self,coach,seat):
        if coach in self.buses:
            if 1<=seat<=20:
                if self.buses[coach].seats[seat-1] == "Empty":
                    self.buses[coach].seats[seat-1] = "Booked"
                    print(f"{seat} No. seat booked successfully!!")
                else:
                    print("This seat is not available. Try another one.")
            else:
                print("Invalid seat number.")
        else:
            print("There is no bus in this coach.")
    
    def available_seat(self,coach):
        if coach in self.buses:
            print(self.buses[coach].seats)
        else:
            print("There is no bus in this coach.")
