#MW 7th UPDATE CALCULATOR

def get_num(question):
    return int(input("How much is your "+question+"?\n"))

def percent(income, expense):
    return round((expense / income)*100,2)

print("Welcome to the budget calculator")

income = get_num("income")
rent=get_num("rent")
utilities=get_num("utilities")
groceries=get_num("groceries")
transportation=get_num("transportation")

rent_percent= percent(income,rent)
utilities_percent=percent(income,utilities)
groceries_percent=percent(income,groceries)
transportation_percent=percent(income,transportation)

print(f"Your rent is {rent} and that is {rent_percent} percent of your income.")
print(f"Your utilites are {utilities} and that is {utilities_percent} precent of your income.")
print(f"Your groceries are {groceries} and that is {groceries_percent} percent of your income.")
print(f"Your transportation is {transportation} and that is {transportation_percent} percent of your income.")
