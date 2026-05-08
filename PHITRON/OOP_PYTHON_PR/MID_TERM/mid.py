class StudentDatabase:
    student_list=[]

    @classmethod
    def add_student(self, student):
        StudentDatabase.student_list.append(student)
    

    @classmethod
    def view_all_students(self):
        if len(self.student_list) == 0:
            print("No student found.")
        else:
            for student in self.student_list:
                student.view_student_info()
                print("----------------------")

    @classmethod
    def find_student_by_id(self, student_id):
        for student in self.student_list:
            if student.get_student_id() == student_id:
                return student
        return None

class Student:
    def __init__(self, student_id, name, department, is_enrolled=False):
        self.__student_id=student_id
        self.__name=name
        self.__department=department
        self.__is_enrolled=is_enrolled

        StudentDatabase.add_student(self)

    def get_student_id(self):
        return self.__student_id

    def enroll_student(self, student_id):
        if self.__is_enrolled is True:
            print(f"{self.__name} is already enrolled.")
        else:
            self.__is_enrolled=True
            print(f"{self.__name} enrolled successfully.")

    def drop_student(self):
        if self.__is_enrolled is True:
            self.__is_enrolled=False
            print(f"{self.__name} dropped successfully.")
        else:
            print(f"{self.__name} is not enrolled.")

    def view_student_info(self):
        print(f'StudentID: {self.__student_id}\nName: {self.__name}\nDepartment: {self.__department}\nEnrolled: {self.__is_enrolled}')
    

    
def Menu():
    while True:
        print("\n----------STD MANAGEMENT SYSTEM----------")
        print("1. View All Students")
        print("2. Enroll Student")
        print("3. Drop Student")
        print("4. Exit")

        choice=input()
        if choice=='1':
            StudentDatabase.view_all_students()

        elif choice=='2':
            student_id=int(input("Enter student ID: "))
            student= StudentDatabase.find_student_by_id(student_id)
            if student is None:
                print("invalid student ID.")
            else:
                student.enroll_student()
        
        elif choice=="3":
            student_id=int(input("Enter student ID: "))
            student= StudentDatabase.find_student_by_id(student_id)
            if student is None:
                print("Invalid Student ID.")
            else:
                student.drop_student()
        elif choice=="4":
            print("Program Ended")
            break
        else:
            print("Invalid choice")

    
    


std1=Student(1, "labib", "EdTE")
std2 = Student(2, "hasan", "SWE")



Menu()