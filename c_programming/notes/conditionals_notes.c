//MW 7th CONDITIONALS

#include <stdio.h>
#include <string.h>
/* logical operators
&& and
|| or
! not

*/
int main (void){
    int grade;
    char name[50];
    printf("What is your grade percent: ");
    scanf("%d", &grade);

    printf("What is your name: ");
    scanf("%s", &name);
    
    printf("%d\n",strcmp(name, "Ms.LaRose"));

if(name == "Ms.LaRose"){
    printf("You don't have a grade\n");
}

    if(grade >= 90){
        printf("You have an a");
    }else if(grade >= 80){
        printf("You have a b\n");
    }else if(grade >= 70){
        printf("You have a C\n");    
    }else {
        printf("You are failing\n");
    }
    







    return 0;
}


/*

What puts something inside of the “if” statement?



How are conditions written in C?

 you start it with if(variable)

How do we write elif conditions in C?

 you just add else if and you have to add parenthesis and a curly bracket at the end

When do else conditions run?



What are the 3 logical operators in C?
&& and
|| or
! not
*/