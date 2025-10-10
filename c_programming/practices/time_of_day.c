// MW 7th TIME OF DAY

#include <stdio.h>

int main (void){

int time;
printf("What time is it in Military time?\n");
scanf("%d", &time);
if (time >=0 && time <12){
    printf("Good morning!");
}else if (time >=12 && time < 18){
    printf("Good afternoon!");
}else if (time >= 18 && time <=24){
    printf("Good night!");
}else {
    printf("That is not a time!\n");
}


    return 0;
}