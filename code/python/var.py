class employee:
    No_of_leaves = 10
    pass
    def getdetails(self):
        return self.name, self.city, self.sal
    def update(self):
    
        self.name = "Ashish"
    def delete(self):
        self.sal = self.sal*5
        
emp1=employee()
emp2=employee()

emp1.name= "Ankit"
emp1.city= "Delhi"
emp1.sal= 60000

emp2.name= "Amit"
emp2.city= "Mumbai"
emp2.sal= 80000

print(emp1.getdetails())
print(emp2.getdetails())

print(emp1.update())
print(emp1.getdetails())

print(emp2.delete())
print(emp2.getdetails())






