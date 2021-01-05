#object oriented programming in python
x = 1
y = "hello"
print(type(x))
#print(x + y)
#int + string is not defined
#is method the function assgin on the class 

#what is object and class
#  x = 1 is we create obj in <"int">

def hello():
    print("hello")


print(type(hello)) # function is also object of class

string = "hello"
print(string.upper())



#create our own class 
class Dog:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        pass
        #call whem we create new obj

    def meow(self):
        return "meow"
    def add_one(self,x):
        return x + 1
    def bark(self):
        print("bark")

d = Dog("alice",1)
d.bark()
x = d.meow()
print(x)
print(d.add_one(2))
print(type(d))
print(d.name)

d1 = Dog("nut",21)
d1.name = "new nut"
print(d1.name)

dog = ["nut","num","milk"]