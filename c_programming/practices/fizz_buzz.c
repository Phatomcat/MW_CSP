//MW 7th FIZZ BUZZ
#include <stdio.h>
#include <string.h>

int main(void){

for (int x=1; x<=50; x++){
    if (x % 3 ==0 && x%5 ==0){
        printf("fizzbuzz\n");
    }else if (x%3==0){
        printf("fizz\n");
    }else if (x%5==0){
        printf("Buzz\n");
    }else{
        printf("%d\n", x);
    }
}


    return 0;
}