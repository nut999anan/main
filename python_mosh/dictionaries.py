#dictionaries in python ????
customer = {
    "name" : "John smith",
    "age" : 30,
    "is_verified" : True

}

customer["Name"] = "Jack reacher"
print(customer["Name"])

customer["age"] = "twenty seven"
print(customer["age"])


def num_to_string(numbers):
    
    num = {
        "0" : "zero",
        "1" : "one",
        "2" : "two",
        "3" : "three",
        "4" : "four",
        "5" : "five",
        "6" : "six",
        "7" : "seven",
        "8" : "eight",
        "9" : "nine"
    }

    for number in numbers:
        print(num[number],end = " ")


#num_to_string(input("type a number: "))

#mosh solution

"""
for number in numbers:
    output = num.get(number,"!")
    print(output)

"""


def convert_to_emoji():
    message = input(">")
    words = message.split(" ")
    
    emojis = {
        ":)" : "😊",
        ":(" : "😢"
    }
    
    for word in words:
        print(emojis.get(word,word),end = " ")

    

convert_to_emoji()