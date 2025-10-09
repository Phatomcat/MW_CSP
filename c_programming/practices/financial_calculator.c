//MW 7th FINANCIAL CALCULATOR

#include <stdio.h>

int main(void){
double income, rent, utilities, groceries, transportation;
double spend, savings, budget;
double rent_percent, utilities_percent, groceries_percent, transportation_percent, savings_percent;

printf("Welcome to the budget calculator ");
printf("Enter your income ");
scanf("%lf",&income);

printf("How much is your rent? ");
scanf("%lf", &rent);

printf("How much is your utilities? ");
scanf("%lf", &utilities);

printf("How much is your groceries? ");
scanf("%lf", &groceries);

printf("How much is your transportation? ");
scanf("%lf", &transportation);

spend = rent+utilities+groceries+transportation;
savings= income*.10;
budget= income-(spend+savings);
rent_percent = (rent*100)/income;
utilities_percent= (utilities*100)/income;
groceries_percent=(groceries*100)/income;
transportation_percent=(transportation*100)/income;
savings_percent=(savings*100)/income;

printf("Your income is %.2f\n",income);
printf("Your rent is %.2f and that is %.f percent of your income\n", rent, rent_percent);
printf("your utilities are %.2f and that is %.f percent of your income\n", utilities,utilities_percent);
printf("Your groceries are %.2f and that is %.f percent of your income\n",groceries, groceries_percent);
printf("Your transportation is %.2f and that is %.f percent of your income\n", transportation, transportation_percent);
printf("You should save %.2f of your income and that is %.f of your income\n", savings,savings_percent);
printf("You have %.2f of spending money every month", budget);





    return 0;
}