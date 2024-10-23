class ClassRoom:
    def __init__(self,name) -> None:
        self.name = name
        self.students = []
        self.subjects = []

    def add_student(self,student):
        roll_num = f"{self.name} -- roll number: {len(self.students)+1}"
        student.id = roll_num
        self.students.append(student)

    def add_subject(self,subject_name):
        self.subjects.append(subject_name)
    
    def take_semester_final(self):
        for subject in self.subjects:
            subject.exam(self.students)
        for student in self.students:
            student.calculate_final_grade()

    # def get_top_students():
    #     pass