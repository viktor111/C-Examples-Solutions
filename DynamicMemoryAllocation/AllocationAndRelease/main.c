#include<stdio.h>
#include<stdlib.h>

int main(void){
    int p;
    char q;
    double r;

    p = malloc(sizeof(int));
    q = malloc(sizeof(char));
    r = malloc(sizeof(double));

    *p = 100;
    *q = 'D';
    *r = 1.234567;

    printf("%d\n", *p);
    printf("%c\n", *q);
    printf("%f\n", *r);

    free(p);
    free(q);
    free(r);

    return 0;
}
    
