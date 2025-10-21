// how to do random


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    int num = rand();
    for(int i=0; i<5; i++){
     int num = rand() % 20 +1;
    printf("Our random number is %d\n", num);
    }

    return 0;
}