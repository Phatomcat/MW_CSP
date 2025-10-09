//MW 7th NAME DECORATOR

#include <stdio.h>
#include <string.h>

int main (void){
char name[50];
char decorated_name[100] = "";
char decoration_1[]="<<<<<";
char decoration_2[]=">>>>>";
printf("What is your name?\n");
scanf("%s",name);
strcat(decorated_name,decoration_1);
strcat(decorated_name,name);
strcat(decorated_name,decoration_2);
printf("%s\n", decorated_name);






    return 0;
}