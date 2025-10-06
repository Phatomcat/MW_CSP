//MW 7th EXPRESSION NOTES C
#include <stdio.h>
#include <math.h>

int main (void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159;
    printf("%d\n" , 8/3);

    printf("%.2f\n", pow (2,4));
    return 0;
}


//What is the difference between an integer and a float in C?
//well an integer is for whole number and floats are for decimals





//How does C handle integer division compared to float division?
//if both numbers are intgers it will return integer division and for float division it can result in a float or double result





//List the arithmetic operators available in C and their functions.
// addition +
// subtration -
// division /
// multiplication *
// modulo (remainder) %




//What is the modulus operator, and how is it used?

// it will return the remainder of the division


//How do you round a float to the nearest integer in C?
//you can change the data type (int)pow(2,4);


//What is type casting in C? Provide an example of explicit type casting.

//when you change the data type printf("d\n", (int) pow (2,4));

//How do compound assignment operators work in C? List three examples.
// you can do +=
// you can do year++;
//-=
//What is the purpose of the math.h library? Name three functions it provides.
// its for math related things like pow is for exponents, log


//How do you print a float with a specific number of decimal places using printf()?
// you can do the %.2f which tells it to only have 2 decimal points


//What happens when you mix integer and float operations in C?
//printf ('%f.2\n", 8.0/3);