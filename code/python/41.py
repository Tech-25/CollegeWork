class Student:
    def __init__(self, name, age, degree):
        self.name = name
        self.age = age
        self.degree = degree
    
    def print_details(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("Degree:", self.degree)

# Create an instance of Student
Stud_1 = Student("", 0, "")

# Take inputs from the user for Stud_1
name_1 = input("Enter name of Student 1: ")
age_1 = int(input("Enter age of Student 1: "))
degree_1 = input("Enter degree of Student 1: ")

# Update the details of Stud_1
Stud_1.name = name_1
Stud_1.age = age_1
Stud_1.degree = degree_1

# Create another instance of Student
Stud_2 = Student("", 0, "")

# Take inputs from the user for Stud_2
name_2 = input("Enter name of Student 2: ")
age_2 = int(input("Enter age of Student 2: "))
degree_2 = input("Enter degree of Student 2: ")

# Update the details of Stud_2
Stud_2.name = name_2
Stud_2.age = age_2
Stud_2.degree = degree_2

# Print the details of the students
print("Details of Student 1:")
Stud_1.print_details()

print()

print("Details of Student 2:")
Stud_2.print_details()






























