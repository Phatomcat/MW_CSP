#MW 7th CONDITIONALS NOTES

#What puts something inside of the “if” statement?
# it becomes a condition
#homework_done=input("Is your homework done:").strip().capitalize()

#if homework_done=="Yes":
    #print("Yes you can go.")
#else:
    #print("Do your homework.")
#What do if statements do?
#they check if the boolean statement is true or false

#What are boolean statements? 
#if homework_done=="No": always result in a true or a false

#What do else statements do?
#It will run the code if the "if" statement is false

#What kind of statement do you use if you have more than 2 needed outcomes?
#you use a if, elif or else statement


#What do each of the different symbols mean in conditionals?

#<less than
#>greater than
#<=less than or equal to
#>=greater than or equal to
#== are they equal/ a question
#!not equal to
#What are the 3 logical operators?
#and, or and not.
name=input("What is your name?\n").strip().capitalize()

if name == "Ms LaRose":
    print("You are the teacher")
elif name == "Tia" or name == "Ashley":
    print("You are a T.A")
else:
    print(f"Hello, {name} you are a student.")






#What are logical operators for?
#they allow to combine multiple conditions together

#What does a nested conditional statement do?
#is a condition that only happens inside of another one.



grade=int(input("What is your grade?\n").strip())

if grade >=90:
    if grade > 100:
        print("You cheated!")
    else:
        print(f"You have {grade}% that is an A!")
elif grade >=80:
    print(f"You have {grade}% that is a B.")
else:
    print(f"You have a {grade}% that is not an A.")



