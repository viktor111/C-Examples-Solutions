#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,k;
    
    printf("Arr size: ");

    scanf("%d" ,&n);

    int *nums = malloc(n*sizeof(int));

    srand(5);

    for(k=0;k<n;k++){
        nums[k] = rand() % 10;
        printf("| %d " ,nums[k]);
    }

    printf("|\n");

    free(nums);

    return 0;
}
    
