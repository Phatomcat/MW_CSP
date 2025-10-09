//MW 7th STRING NOTES
#include <stdio.h>
#include <string.h>

int main (void){

    char name[] = "Marshall";

    char last_name[25];

    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);

    strcat(full_name, name);

    printf("[%s]\n", full_name);

    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    printf("Tell me your last name: \n");

    

    printf("Your name is %s %s",name,last_name);


    printf("[%s]\n", full_name);
    return 0;

}


//What is the difference between a string and a character?
// strings are double quotes and characters are single quotes

//What types of quotation marks do we need for a string?
//"" you usee '' for single charachters

//What library do we need to include to access the string functions in C?
//you need to add string.h

//List functions the library allows us to use.
//you can do strcat strlen and the last is sizeof. size of includes the \n character at the end of the string

//How do we concatenate strings in C?
//you do strcat

//How do we get individual characters from a string in C?
//you call the name of the variable printf("%c", last_name[0]) the 0 is the thing in the list you are calling, last_name[0] = 'R' so you are calling R

