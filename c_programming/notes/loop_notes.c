//MW 7th loop notes

#include <stdio.h>
#include <string.h>

int main (void){

    int nums[] = {1,2,3,4,5,6,7};
    char candies[3][20] = {"Skittles", "Hersheys", "KitKat"};             
    for(int x = 0; x <7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i <3; i++){
    printf("%s, is my favorite candy!\n", candies [i]);
    }
    for(int num = 1; num <11; num++){
    printf("%d\n", num);
    }

int num = 0;
while(num < 11){
    printf("%d\n", num);
    num++;
}


    return 0;
}


/*
What is a loop? 
it loops what is inside of it until you tell it to stop


What are the two types of loops?
for loop and while loop


What is iteration
the amount of times it loops


What are arrays?
its just a list, the variables are set next to eachother

How do you make lists in C?
 int nums[] = {1,2,3,4,5,6,7};


How do you make for loops in C? 
for(int x = 0; x <7; x++){
        printf("%d\n", nums[x]);
    }


How do you make while loops in C?

while(num < 11){
    printf("%d\n", num);
    num++;
}


*/