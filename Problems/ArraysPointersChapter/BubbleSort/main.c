#include<stdlib.h>
#include<stdio.h>

#define SIZE 12

int main(void){
    int nums[SIZE];

    int i,j,k;

    srand(5);

    printf("Before sort:\n");

    for(i=0;i<SIZE;i++){
        nums[i] = rand()%20;

        printf("| %3d ",nums[i]);
    }

    printf("|\n");

    for(j=1;j<SIZE-1;j++){
        for(i=0;i<SIZE-j;i++){
            if(nums[i] > nums[i+1]){
                k=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=k;
            }
        }
    }

    printf("After bubble sort:\n");
    
    for(i=0;i<SIZE;i++){
        printf("| %3d ",nums[i]);
    }

    printf("|\n");

    return 0;
}
    
