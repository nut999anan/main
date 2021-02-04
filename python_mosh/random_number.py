#generate random value
from random import randint
import random

"""
for i in range(3):
    print(random.random())
    print(random.randint(0,10))
"""

members = ["nut","num","milk"]
leader = random.choice(members)
print(f"leader is {leader}")

class Dice:
    def roll(self):
        first = random.randint(1,6)
        second = random.randint(1,6)
        return first,second

dices = Dice()
dice1,dice2 = dices.roll()
print(dice1,dice2)

