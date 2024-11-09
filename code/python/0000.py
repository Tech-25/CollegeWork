class college:
    def __init__(self, name):
        print("college init method called")
        self.name = name

    def display1(self):
        print("College",self.name)

class student:
    def __init__(self, name):
        print("student init method called")
        self.name = name

    def display(self):
        print("student",self.name)

college1 = college("GU")
college.display1(self)


student = student("Ankur")
student.display()
        
