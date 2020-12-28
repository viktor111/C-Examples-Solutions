#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main(void){
    int nums [SIZE];

    int k;

    srand(5);

    for(k=0;k<SIZE;k++){
        nums[k]=1+rand()%20;
        printf("| %2d ", nums[k]);
    }

    printf("|\n");

    for(k=0;k<SIZE;k++){
        *(nums+k) %= 10;
        printf("| %2d ", *(nums+k));
    }

    
    printf("|\n");

    return 0;
}
    
