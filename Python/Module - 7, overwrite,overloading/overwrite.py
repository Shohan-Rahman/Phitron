class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
    
    def eat(self):
        print('Healthy and Unhealthy food.')

    #Forcefully overwrite er jonne.
    def exercise(self):
        raise NotImplementedError
    
class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)
    
    #Over write korce ei eat() ta uporer eat() k.
    def eat(self):
        print('Healthy food')

    #uporer forcefully overwrite er jonne korai lagbe.
    def exercise(self):
        print('Do exercise')

momin = Cricketer('Momin',36,67,91)
momin.eat()
momin.exercise()