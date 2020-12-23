#include<stdio.h>
#include<stdlib.h>

int main(void){
    int number;

    char *pnt;

    int k, bytes;

    bytes = (int)sizeof(int);

    pnt = (char*) &number;

    for(k=1;k<=bytes;k++){
        *pnt=1;
        pnt++;
    }

    printf("Value of number %d\n", number);

    number = 0;

    pnt-=bytes-1;
    *pnt=2;

    printf("Value of number %d\n", number);

    return 0;
}
    
