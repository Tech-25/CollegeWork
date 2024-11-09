class employee:
    No_of_leaves = 10
    pass
    def __init__(self, Iname, Icity, Isal):
        self.name = Iname
        self.city = Icity
        self.sal = Isal
        
    def getdetails(self):
        return self.name, self.city, self.sal
    

emp3=employee("Ashish", "Pune", 50000)
emp1=employee()
emp1.name= "Ankit"
emp1.city= "Delhi"
emp1.sal= 60000





print(emp3.getdetails())
