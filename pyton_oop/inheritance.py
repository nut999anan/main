#python inheritance
class Pet:
    def __init__(self,name,age):
        self.name = name
        self.age = age
    def show(self):
        print(f"I am {self.name},and I am {self.age} years old")

#Class(Class)
class Cat(Pet):
    def __init__(self,name,age,color):
        super().__init__(name,age)
        self.color = color
    def speak(self):
        print("meow")
    def show(self):
        print(f"I am {self.name},and I am {self.age} years old also I am {self.color}")


#python inheritance
class Dog(Pet):
    def speak(self):
        print("Bark")

class Fish(Pet):
    pass

p = Pet("alice",1)
p.show()
c = Cat("alice",1,"orange")
c.show()