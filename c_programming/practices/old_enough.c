//MW 7th OLD ENOUGH

#include <stdio.h>


int main (void){

int age;
printf("How old are you?\n");
scanf("%d", &age);
if (age >18){
    printf("You can vote");
}else if (age >+16 && age <=17){
    printf("You can drive");
}else if (age == 15){
    printf("You can get a learners permit!");
}else if (age >=4 && age <=14){
    printf("You can go to school");
}else if (age <4)
    printf("You can vote, drive, get a learners permit or go to school");






    return 0;
}

