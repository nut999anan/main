#classes in python 
""" we use classes to define new variable 


"""

int = 3
strings = "string"
boolean = True
list = [1,2,3]
#each data have its type

#class point
class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y
    def move(self,x,y):
        self.x += x
        self.y += y
    def draw(self):
        print(f"({self.x},{self.y})")

#object is instance of the class ( blueprint of object)

point1 = Point(12,3)
point1.draw()
point1.move(-2,3)
point1.draw()

#what is magic method


#inheritance
class Animal():
    def __init__(self,name):
        self.name = name
    def walk(self):
        print("walk")
    def call(self):
        print(self.name)

class Dog(Animal):
    #is the init inherit from Animal 
    pass

dog1 = Dog("alice")
dog1.walk()
dog1.call()