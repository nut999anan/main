#List in python
for item in "python":
    print(item)

for item in [1,2,3]:
    print(item)

for item in range(4):
    print(item)

total = 0
for item in range(5):
    total += item
    print(total)

#nested loops
for x in range(3):
    for y in range(2):
        print(f"{x},{y}")

#print f from nested loops
for x in range(5):
    if(x in [1,3,4]):
        print("x" * 2)
    else:
        print("x" * 5)
print("\n")


#solution 
column = [5,2,5,2,2]

for item in column:
    print("x" * item)


#list vs array vs tuple in python
# ? mutable vs immutable structure

#their is no array in python
list = [1,2,3,4]
tuple = (1,2,3,4)
print(tuple[3])
print(list)
list[3] = 7
print(list)
#tuple can't be reassign

max = 0
for item in list:
    if(item > max):
        max = item
print(max)

matrix = [
    [1,2,3],
    [2,3,4],
    [5,6,7]
]

print(matrix[0][2])#first row third column


#list methods
numbers = [5,2,1,7,4]
#append
numbers.append(20)
print(numbers)
#insert
numbers.insert(0,17)#insert(index,object)
print(numbers)
#clear
copy = numbers.copy()
#copy = number have the same ma chnage on copy affect the numbers
copy.clear()
print(copy)
#index 
print(numbers)
print(numbers.index(5))
print(5 in numbers) # in does not generate the error value
numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)

#write a function that remove duplicate in the list
def remove_dup(arr):
    """remove duplicate item in the list"""
    result = []
    for item in arr:
        if(item not in result):
            result.append(item)
    return result

array = [1,1,1,2,4,2,3,5]
print(remove_dup(array))

