class Exam:
    def __init__(self,name,roll):
        self.name = name
        self.roll = roll
    
    def attend_to_exam(self):
        self.marks = 10
        print(f'Thank you for attend exam')
    
    def course(self,Bangla,English,Math,ICT,GK):
        if self.marks == 10:
            self.marks += Bangla + English + Math + ICT +GK
        print(f'Your total marks: {self.marks}')

first_semi = Exam('Nahid',1101)
first_semi.attend_to_exam()
first_semi.course(60,40,65,55,35)
    