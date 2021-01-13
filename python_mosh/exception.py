
#exception

try:
    age = int(input("type your age: "))
    income = 20000
    risk = income/age
    print(f"your age is {age}")
except ValueError:
    print("invalid value please type in integer")
except ZeroDivisionError:
    print("zero is invalid age")

    