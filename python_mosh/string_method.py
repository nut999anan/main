#string method
""" each data type have funciton assign to it """
course = "Python for Beginners"
print(course)
print(len(course))#use to find length and limit the input range
print(course.upper())
print(course.lower())
print(course) #both lower and upper does not change the original string
print(course.find("h"))#first index that the substring founded
print(course.replace("Beginners","Intermidiate"))
print(course)
print(course.replace("P","J"))
print("Python" in course)
print("python" in course)
""" find return index in return boolean """
string = "mY name Is nut"
print(string)
print(string.title())