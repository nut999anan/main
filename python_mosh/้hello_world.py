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

#getting user info and print out
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




#illustart how index in string works
#string method.

string = "Hello"


def index_string(str,start=0,end = 0):
    if(end == 0):
        print(str[start])
        result = f"str[{start}] = {str[start]}"
    elif(start == 0):
        result = f"str[:{end}] = {str[:end]}"
    else:
        result = f"str[{start}:{end}] = {str[start:end]}"

    print(result)

index_string(string,4)
index_string(string,0,-1)
index_string(string,1,3)



first = "John"
last = "Smith"

message = f"{first} {last}"
print(message)

def combine(str1,str2):
    message = f"{str1} {str2}"
    print(message)
    return message

combine(first,last)

string = "nut"
print(f"length of string is {len(string)}")

def function1(arr):
    arr[0] = 1

array = [0,1,2]
function1(array)11
print(array)

#string method 
str1 = "Hello"
str2 = "World"
string = str1 + str2
print(string)

print()