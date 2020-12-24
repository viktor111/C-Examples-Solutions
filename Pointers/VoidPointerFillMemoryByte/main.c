#include<stdio.h>
#include<stdlib.h>

int main(void){
    void *pnt;

    int number;

    pnt = &number;

    *((int*)pnt) = 1<<8;

    int bytes = (int) sizeof(number);

    *((char*)pnt) = 3;

    printf("Value of number is:\t%d\n", number);

    int k;

    for(k=1;k<=bytes;k++){
        char current_pnt_value = ((char*)pnt)[k-1];
        printf("Value of %d-byte:\t%d\n", k,current_pnt_value);
    }
    
    return 0;
}
    
