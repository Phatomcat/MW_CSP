#MW 7th OLD ENOUGH ASSIGNMENT

how_old = int(input("How old are you?\n"))

if how_old < 4:
    print(f"Since you are {how_old}, you can not Vote, Drive, get a learners permit and go to school.")
elif how_old >=4 and how_old<=14:
    print(f"Since you are {how_old}, you can go to school!")
elif how_old == 15:
    print(f"Since your are {how_old}, you can get a learners permit!")
elif how_old >=16 and how_old<=17:
    print(f"Since you are {how_old}, you can drive!")
elif how_old>=18 and how_old<120:
      print(f"Since you are {how_old}, you can vote!")
elif how_old > 120:
    print(f"You are not that old!")

