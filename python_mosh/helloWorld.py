#basic string
print("Anan")
print("Mingmitpattanakul")
print("x" * 10)

#formatted string
price = 10
print(price)
print(f"price = {price}")

#data type
price = 10
rating = 4.9 
name = "nut"
is_published = True

#function
def type_of(data):
    print(f"{data} is {type(data)}")

type_of(price)
type_of(rating)
type_of(name)
type_of(is_published)

#getting input
def user_info():
    """ get user_info and print it out """
    username = input("what is your name: ")
    fav_color = input("what is your fav color: ")
    print(f"Hello {username} !")
    print(f"{username} likes {fav_color}")

#tell age of the user in 2019 by using birth_year
def age():
    '''recieve birth_year as input, and print age in 2019'''
    birth_year = int(input("Birth year: "))
    age = 2019 - birth_year
    print(age)



def weight_conversion():
    '''recieve weight lbs and a input from user an printout weight in kg to terminal '''
    weight_lbs = input("Weight (lbs): ")
    weight_kg = int(weight_lbs) * 0.45
    print(weight_kg)





def index(arr,start,end = 0):
    if(end == 0):
        print("string[{start}] is {arr[start]}")
    else:
        print("string[{start}:{end}] is {arr[start:end]}")

