#include<stdio.h>
#include<stdlib.h>

int main(void){
    int m=3,n=5;

    int (*p)[n];

    p=malloc(m*n*sizeof(int));

    int i,j,count=0;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            count++;

            p[i][j]=count;

            printf("%3d ",p[i][j]);
        }
        printf("\n");
    }

    free(p);

    return 0;
}
    
