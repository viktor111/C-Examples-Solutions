#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main(void){
    int nums[SIZE];

    int *p = nums;

    int *q = nums + SIZE-1;

    int k;

    for(k=0;k<SIZE;k++){
        q[-k] = k + 1;
    }

    while(p<=q){
        printf("| %d ", *p);
        p++;
    }

    printf("|\n");
    

    return 0;
}
    
