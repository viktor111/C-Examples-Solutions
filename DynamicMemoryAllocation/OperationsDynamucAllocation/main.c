#include<stdio.h>
#include<stdlib.h>

int main(void){
    int k, m = 3;

    int bytes = m * sizeof(int);

    int *p = malloc(bytes);

    char *q;

    q = (char*)p;

    for(k=0;k<bytes;k++){
        q[k] = k+1;
        printf("| %d ", q[k]);
    }
    
    printf("|\n");

    for(k=0;k<m;k++){
        printf("| %d ", p[k]);
    }

    printf("|\n");

    free(p);
    
    return 0;
}
    
