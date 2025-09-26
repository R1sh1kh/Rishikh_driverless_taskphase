class Student:
    def __init__(self, name, age, grades):
        self.name = name
        self.age = age
        self.grades = grades 
    def __str__(self):
        grades_str = ", " .join([f"{sub}: {marks}"for sub, marks in self.grades.items()])
        return f"name: {self.name}, age: {self.age}, grade: {grades_str}"
    

    def average(self):
        return (sum(self.grades.values())/3.0)
    


def main():
    student = get_student()
    for stud in student:

        print(stud)
        print("Average is ", stud.average())


def get_student():
    n = int(input("Enter number of students"))
    students=[]
   
    for i in range(n):
        grades={} 
        name = input("Enter name")
        age = input("Enter age")
        for j in range (3):
            sub = input("Enter subject")
            marks= int(input("Enter marks for that subject"))
            grades[sub]= marks

        students.append(Student(name, age, grades))

    return students

if __name__ == "__main__":
    main()