#MW 7th BUDGET CALCULATOR

print("Hello, this is a budget calculator, below please type your income.")
income=int(input("How much is your income?\n"))

rent=int(input("Okay, Now how much is your rent?\n"))
utilities=int(input("How much are your utilites?\n"))
groceries=int(input("How much are your groceries?\n"))
transportation=int(input("How much is your transportation?\n"))



spend=(income-(utilities+groceries+transportation+rent))
save=round(spend*.1)
budget=round(income*.99)
#print(int(rent*.1,"T"))

#percent_rent= rent divided by income times 100


print("This is how much you can spend,", budget)
print("This is how much of your income your should save,", (save))
