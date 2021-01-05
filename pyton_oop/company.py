class Person:
    number_of_people = 0
    GRAVITY = 9.8
    def __init__(self,name):
        self.name = name
        Person.addPerson()
    
    @classmethod
    def number_of_people_(cls):
        return cls.number_of_people

    @classmethod
    def addPerson(cls):
        cls.number_of_people += 1

    


p1 = Person("Tim")
p2 = Person("Nut")
Person.addPerson()

print(Person.number_of_people_())