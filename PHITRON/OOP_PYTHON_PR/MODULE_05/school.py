class Student:
    def __init__(self, name, current_class, id):
        self.name=name
        self.id=id
        self.current_class=current_class
    
    def __repr__(self) -> str:
        return f'student: {self.name}, class: {self.current_class}, id: {self.id}'

class Teacher:
    def __init__(self, name, subject, id):
        self.name=name
        self.subject=subject
        self.id=id
    
    def __repr__(self) -> str:
        return f'Teacher: {self.name}, subject: {self.subject}, id: {self.id}'
    
class school:
    def __init__(self, name):
        self.name=name 
        self.teachers =[]
        self.students=[]

        # print(self.teachers)

    def add_teacher(self, name, subject):
        id=len(self.teachers)+101
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)
    def enroll(self, name, fee):
        if fee<6500:
            return 'Not enough fee'
        else:
            id = len(self.students)+1
            student = Student(name, 'C', id)
            self.students.append(student)
            return f'{name} is enroll with id:{id}'
        
    def __repr__(self):
        print('Welcome to ', self.name)
        print('----------OUR Teachers----------')
        for teacher in self.teachers:
            print(teacher)
        print('----------OUR student----------')
        for student in self.students:
            print(student)
        print(len(self.teachers))
        return 'all done'

        


        
# alia=Student("alia", 9,1)
# rahim=Teacher('rahim', 'ICT', 9)

# print(alia)
# print(rahim)

phitron =school('phitron')
phitron.enroll('Alia', 5400)
phitron.enroll('rani', 7000)
phitron.enroll('Abc', 6500)
phitron.enroll('labib', 9000)

phitron.add_teacher('Tom cruise', 'DS')
phitron.add_teacher('Kolimulla', 'math')

print(phitron)


