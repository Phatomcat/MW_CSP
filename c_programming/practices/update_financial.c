//MW 7th UPDATED FINANCIAL CALCULATOR

#include <stdio.h>
#include <string.h>

float input(char question[]) {
    float value;
    printf("How much is your monthly %s\n", question);
    scanf("%f",&value);
    return value;
}
float percentofincome(float income, float amount){
    return (amount / income)*100;
}

int main(void){

float income, rent, utilities, groceries, transportation;
float rent_percent, utilities_percent, groceries_percent, transportation_percent;
float savings, savings_percent, spent;
income = input("income");
rent=input("rent");
utilities = input("utilities");
groceries = input("groceries");
transportation = input("transportation");

rent_percent=percentofincome(income, rent);
utilities_percent = percentofincome(income,utilities);
groceries_percent = percentofincome(income,groceries);
transportation_percent=percentofincome(income,transportation);
savings=income*.10;
savings_percent=percentofincome(income,savings);
spent =income-(rent+utilities+groceries+transportation+savings);
printf("your rent is %.2f and that is %.2f of your income\n",rent, rent_percent);
printf("your utilities are %.2f and that is %.2f of your income\n",utilities, utilities_percent);
printf("your groceries are %.2f and that is %.2f of your income\n",groceries, groceries_percent);
printf("your transportation is %.2f and that is %.2f of your income\n",transportation, transportation_percent);
printf("You should save %.2f a month and that is %.2f of your income\n", savings,savings_percent);
printf("you have %.2f of spending money each month",spent);

return 0;
}
