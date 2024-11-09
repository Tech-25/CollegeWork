class Address:
  def __init__(self, street, number):
    self.street = street
    self.number = number

  def myfunc(self):
    print("My Address is " + self.street)
    print("My street is " + self.number)

p1 = Address("Sector 150", "Noida")
p1.myfunc()
