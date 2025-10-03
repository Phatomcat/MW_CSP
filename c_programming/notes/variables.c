// MW 7th VARIABLES
#include <stdio.h> // standered library input outputs, tells c that you want print statements and inputs

int main(void){
    int grade; //4 bytes
    const float pi = 3.14; //4 bytes
    double long_pi = 3.141592653; //8 bytes
    char letter_grade; // 1 byte
    char name[] = "marshall";
//user input
    printf("What is your grade percentage as a whole number:\n");
    scanf("%d", &grade);  

    printf("What is your letter grade:\n");
    scanf(" %c", letter_grade);

    printf("%s did it!\n", name);
    printf("you have a %d, in the class. That is an %c\n", grade, letter_grade);


    return 0;
}




//What is the main difference between declaring variables in Python and C?
//they can't change data types midway through and all variables take the same amount of space

//In C, what is the purpose of specifying a data type when declaring a variable?
// so you can 


//List three common data types used in C and their corresponding format specifiers for printf().

//%s is for string
//%d is is for digit/ int
//%c is for character
//%f is for float
//lf is for double float


//How do you declare and initialize an integer variable named "age" with the value 25 in C?



//What is the difference between printf() and scanf() functions in C?
//scanf needs 


//How do you add comments in C?
//

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?

//standered library input outputs, tells c that you want print statements and inputs

//In C, what is the significance of the main() function?

// everything has to be in a function, main is the function that is running the code

//What is the difference between %d and %f format specifiers in printf()?



//How do you print a newline character in C?

// \n

//What is the purpose of the & symbol when using scanf() to get user input?

//because its telling the input to go into a specific variable, basically +=

//How do you declare a constant in C? Provide an example.

//a constant does not exist in python, it marks a variable so then it does not change.


