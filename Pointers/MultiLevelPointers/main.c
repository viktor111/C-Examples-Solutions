#include<stdio.h>
#include<stdlib.h>

int main(void){
    double num;

    double *pnt;

    double **q;

    pnt = &num;

    q = &pnt;

    printf("Adress of num:\t%p\n", &num);
    printf("Adress of pnt:\t%p\n", &pnt);
    printf("Adress of q:\t%p\n", &q);

    printf("Memory size of num:\t%d\n", sizeof(num));
    printf("Memory size of pnt:\t%d\n", sizeof(pnt));
    printf("Memory size of q:\t%d\n", sizeof(q));

    **q = 1.234567;

    printf("Value of num:\t%f\n",num);
    printf("Check: %f = %f = %f\n", num, *pnt, **q);

    return 0;
}
    
