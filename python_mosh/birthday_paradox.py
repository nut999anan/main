import matplotlib.pyplot as plt
from numpy import linspace
#from math import factorial

""" find two peopl in n peopl  that have the sam birthday """
# P(x=2)



def factorial(n):
    factorial = 1
    if int(n) >= 1:
        for i in range (1,int(n)+1):
            factorial = factorial * i
    return factorial

def combination(n,r):
    combination = (factorial(n))/((factorial(n-r))*(factorial(r)))
    return combination

def fact(start,end):
    factorial = 1.0
    list = linspace(start,end,end-start+1)
    print(list)
    
    for item in list:
        factorial *= item
    return factorial
    

fact(359,365)
print(fact(360,365))


def birthday_paradox(n,k):
    #probability = (factorial(364)/(factorial(365 - (n-k+1)) * 365**n)
    
    probability = fact(365-(n-k),364)*(1/365**n)
    probability *= combination(n,k)
    return probability

def plot(k):
    n = []
    for i in range(2,200):
        n.append(i)
    
    P = []
    # loop through all item in n then plot on P axis
    for i in n:
        P.append(birthday_paradox(i,k))
    
    plt.plot(n,P)
    plt.show() 

#
plot(2)

#print(linspace(364,365-(6),6))