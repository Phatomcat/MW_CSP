#MW 7th LOOP NOTES

foods =["Chocolate", "Pasta","Brownies","Cookies","Garlic Bread","Fajitas"]

#What is a loop? 

#Repeats the code inside them for a specified number of times

#What are the two types of loops?

# For loop
for food in foods:
    #print(f"{food} is my favorite food!")
    print("Hi")

for x in range(1,21):
    print(x)

#While loops

#i = 0
#while True:
    #print(i)
    #i+=1
#Infininite loop

i=1


while i <= 20:
    print(i)
    i+=1
x=1

while x < 21:
    if x % 2 ==0:
     print(f"{x} is an even number.")
    else:
     print (f"{x} is an odd number")
    x+=1



import random

d=1
end = random.randint(1,20)

#while d!= end:
   #print("Duck")
   #d+=1

#print("Goose")
while True:
   if d==end:
      print("Goose")
      break
   else:
      print("Duck")
      d+=1





#What is iteration

#How many times a loop has run

#What are lists?

#  
#How do you make lists in python?

#
  
#How do you make for loops in python?
#
  
#How do you make while loops in python?
