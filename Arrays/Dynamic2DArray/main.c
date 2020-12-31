#include<stdio.h>
#include<stdlib.h>

int main(void){
    int m,n;

    int i,j,count=0;

    printf("Count of rows: ");
    scanf("%d",&m);
    printf("Count of columns: ");
    scanf("%d",&n);

    int **nums = malloc(m*sizeof(int*));

    for(i=0;i<m;i++){
        nums[i]=malloc(n*sizeof(int));
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            count++;
            nums[i][j]=count;
            printf("%3d ",nums[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        free(nums[i]);
    }

    free(nums);

    return 0;
}
    
