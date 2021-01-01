#include<stdio.h>
#include<stdlib.h>

int main(void){
    int k;
    
    int *nums;

    nums = (int[3]){1,2,3};

    for(k=0;k<3;k++){
        printf("%d ",nums[k]);
    }

    printf("\n");

    for(k=0;k<5;k++){
        printf("%d ", (int[]){1,3,5,7,9}[k]);
    }

    printf("\n");
    return 0;
}
    
