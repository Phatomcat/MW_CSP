#MW 7th FUNCTION NOTES


#What a function is
#a collection of code designed for a specific task


#welcome()
#welcome()
#welcome()
#welcome()


#Why we use functions
# So you do not have to repeat things over and over again

#How to write a function in Python
def welcome():
    name=input("What is your name")
    print(f"Hello,{name}!")

#What parameters and arguments are
#an argument is the value of the paramater when the function is called, the parameter is a variable that only exists inside the funtion

#How to use parameters and arguments in python
def add(number, number_two):
    number += number_two
    print(number)



num_one=12
num_two=4

add(80, 9)
add(3, 9)

#What return statements are
#it sends the value to where you called the function


#How to use return statements in a program
#
import random

def roll(mod):
    return random.randint(2,18) + mod

strength=roll(0)
dextarity=roll(1)
intelligence=roll(1)
charisma=roll(0)


print(f"Strength: {strength}\nDex: {dextarity}\nInt:{intelligence}\nChar: {charisma}")