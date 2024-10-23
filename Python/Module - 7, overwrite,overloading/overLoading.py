class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
    
    def eat(self):
        print('Healthy and Unhealthy food.')
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)
    
    #plus sign er over load
    def __add__(self,other):
        return self.age + other.age
    
    #mul(*) sign er over load
    def __mul__(self,other):
        return self.height * other.height
    
momin = Cricketer('Momin',36,67,91)
mushi = Cricketer('Mushi',34,62,78)

# 2ta class er add,mul,div korte hoile over load korte hoi.
print(momin + mushi)
print(momin * mushi)