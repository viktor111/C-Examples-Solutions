#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,k;

    printf("Array size: ");

    scanf("%d", &n);

    int nums[n];

    srand(5);

    for(k=0;k<n;k++){
        nums[k] = rand() % 100;
        printf("| %d ", nums[k]);
    }

    printf("|\n");
    return 0;
}
    
