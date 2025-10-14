//MW 7th FUNCTION NOTES
#include <stdio.h>
#include <string.h>
void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy birthday %s you are %d\n", name, age);
}

int mul(int x, int y){
    return x*y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have\n", type);
    scanf("%f", &value);
    return value;
}

int main(void){
birthday("marshall", 16);
birthday("alton", 18);
birthday("kimball", 22);
int product = mul(8,5);
printf("%d\n", product);
printf("%d\n", mul(4,6));

float pencils = get_number("pencils");
float notebooks = get_number("notebooks");
printf("You have %.2f pencils and %.2f notebooks", pencils, notebooks);




    return 0;
}





/*
What a function is

a collection of code designed for a specific task

Why we use functions
so you dont repeat things all the time


How to write a function in C

void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy birthday %s you are %d\n", name, age);
}


What are arguments and parameters?
an argument is what you call, the parameter is what you define


How do arguments and parameters work together?
the argument gets sent to the parameter


How to use parameters and arguments in C
float get_number(char* type){
    float value;
    printf("How many %s do you have\n", type);
    scanf("%f", &value);
    return value;
}


What are return statements?
it sends the value to where you called the function


How do return statements change how you define a function in C?

you have to tell it what data type the function is returning


What do return statements do with the information?
they send the value to the place where you called it so you can use it later.


*/