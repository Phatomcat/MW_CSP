// MW 7th TIME OF DAY

#include <stdio.h>

int main (void){

int time;
printf("What time is it in Military time?\n");
scanf("%d\n", &time);
if (time >=0 && time >11){
    printf("Good morning!");
}else if (time >=11 && time < 18){
    printf("Good afternoon!");
}else if (time >= 18 && time <=24){
    printf("Good night!");
}else (time > 24);
    printf("Thats not a time!");


    return 0;
}