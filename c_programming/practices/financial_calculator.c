//MW 7th FINANCIAL CALCULATOR

#include <stdio.h>
#include <math.h>

int main(){
int income, rent, utilities, groceries, transportation;
int spend, savings, budget;
int rent_percent, utilities_percent, groceries_percent, transportation_percent;

printf("Welcome to the budget calculator");
printf("Enter your income");
scanf("%.2f",income);

printf("How much is your rent?");
scanf("%.2f", &rent);

printf("How much is your utilities?");
scanf("%.2f, &utilities");

printf("How much is your groceries?");
scanf("%.2f", &groceries);

printf("How much if your transportation?");
scanf("%.2f", &transportation);

spend = rent+utilities+groceries+transportation;
savings= income*.10;
budget= income-(spend+savings);
rent_percent = (rent*100)/income;
utilities_percent= (utilities*100)/income;
groceries_percent=(groceries*100)/income;
transportation_percent=(transportation*100)/income;
savings_percent=(savings*100)/income;

printf("Your income is %f",income);
printf("Your rent is %f and that is %f percent of your income", rent, rent_percent);
printf("your utilities are %f and that is %f percent of your income", utilities,utilities_percent);
printf("Your groceries are %f and that is %f percent of your income",groceries, groceries_percent);
printf("Your transportation is %f and that is %f percent of your income", transportation, transportation_percent);
printf("You should save %f of your income and that is %f of your %f of your income", savings,savings_percent)









    return 0;
}