class classA(object):
    classAtr = "I am the same for all objects."

    def __init__(self, ins_var):
        self.instanceVar = ins_var

# Make 3 objects and initialise them with different values
obj1 = classA(5)
obj2 = classA(10)
obj3 = classA(15)

print("I am obj1 and my attributes are: ")
print("Class Attribute: ", obj1.classAtr)
print("Instance Attribute:", obj1.instanceVar ,"\n")

print("I am obj2 and my attributes are: ")
print("Class Attribute: ", obj2.classAtr)
print("Instance Attribute: ", obj2.instanceVar, "\n")

print("I am obj3 and my attributes are: ")
print("Class Attribute: ", obj3.classAtr)
print("Instance Attribute: ", obj3.instanceVar, "\n")
