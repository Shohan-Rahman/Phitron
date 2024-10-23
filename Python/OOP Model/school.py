class Student:
    def __init__(self,name,current_class,id):
        self.name = name
        self.current_class = current_class
        self.id = id
    
    def __repr__(self) -> str:
        return f'student name: {self.name}, class: {self.current_class}, id: {self.id}'

class Teacher:
    def __init__(self,name,subject,id):
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f'teacher name: {self.name}, subject: {self.subject}, id: {self.id}'
    
class School:
    def __init__(self,name):
        self.name = name
        self.teachers = []
        self.students = []

    def add_teacher(self,name,subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name,subject,id)
        self.teachers.append(teacher)

    def enroll(self,name,fee):
        if fee < 5000:
            return 'Not enough money'
        else:
            id = len(self.students) + 1
            student = Student(name,'C++',id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money: {fee - 5000}'

    def __repr__(self) -> str:
            print(f'Welcome to {self.name}')
            print('------Our Teacher------')
            for teacher in self.teachers:
                print(teacher)
            print('------Our Student-------')
            for student in self.students:
                print(student)
            return f'Thank you'
    
# rahim = Student('Rahim',10,1)
# print(rahim)

funny = School('Funny')
funny.enroll('Ha',4000)
funny.enroll('Haa',7000)
funny.enroll('Haaa',87000)
funny.enroll('Haaaa',46000)
funny.enroll('Haaaaa',50000)

funny.add_teacher('No','thakuma')
funny.add_teacher('Noo','nonte')
funny.add_teacher('Nooo','fonte')
funny.add_teacher('Noooo','boltu')
funny.add_teacher('Nooooo','godzilla')

print(funny)