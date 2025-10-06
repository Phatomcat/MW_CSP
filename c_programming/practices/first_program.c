// MW 7th FIRST PROGRAM
#include <stdio.h>

int main (void){
    char name[50];
    printf("What is your name: ");
    fgets(name, sizeof (name), stdin);
    printf("Hello," "%s", name);
    

    return 0;
}

