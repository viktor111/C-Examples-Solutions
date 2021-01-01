#include<stdio.h>
#include<stdlib.h>

int main(void){
    int first[4] = {1,2,3,4};
    
    int second[3] = {5,6,7};

    int third[5] = {8,9,10,11,12};

    int *nums[3];

    nums[0] = first;
    nums[1] = second;
    nums[2] = third;

    int cols[3] = {4,3,5};

    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<cols[i];j++){
            printf("%3d ",nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
