#MW 7th BUDGET CALCULATOR

print("Hello, this is a budget calculator, below please type your income.")
income=int(input("How much is your income?\n"))

rent=int(input("Okay, Now how much is your rent?\n"))
utilities=int(input("How much are your utilites?\n"))
groceries=int(input("How much are your groceries?\n"))
transportation=int(input("How much is your transportation?\n"))

spend=(rent+utilities+groceries+transportation)

savings= int(income * .10)

budget= int(income-(spend+savings))

rent_percent=round((rent/income)*100)
utilities_percent=round(utilities/income*100)
groceries_percent=round((groceries/income*100))
transportation_percent=round((transportation/income*100))
savings_percent=round((savings/income*100))

#RENT OUTPUT
print("Your rent is ",rent)
print("and that is",rent_percent)
print("percent of your income!\n")
#UTILITIES OUTPUT
print("Your utilities are", utilities)
print("and that is ", utilities_percent)
print("percent of your income!\n")
#GROCERIES OUTPUT
print("Your groceries are ",groceries)
print("and that is",groceries_percent)
print("percent of your income!\n")
#TRANSPORTATION OUTPUT
print("Your transportaion is ",transportation)
print("and that is",transportation_percent)
print("percent of your income!\n")

print("You should save", savings)
print("and that is ",savings_percent)
print("percent of your income!\n")

print("Your budget would be", budget)