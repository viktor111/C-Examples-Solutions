#include<stdio.h>
#include<stdlib.h>

#define SIZE 3

int main(void){
    int i,j;

    int A[2][SIZE] = {{10,20,30},{40,50,60}};

    int B[4][SIZE] = {{0,1,2},{3,0,4},{5,6,0},{7,8,9}};

    int (*pnt)[SIZE];

    pnt = A;
    printf("First array:\n");

    for(i=0;i<2;i++){
        for(j=0;j<SIZE;j++){
            printf("%d ", pnt[i][j]);
        }
        printf("\n");
    }

    pnt = B;
    printf("Second array:\n");

    for(i=0;i<4;i++){
        for(j=0;j<SIZE;j++){
            printf("%d ",pnt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
