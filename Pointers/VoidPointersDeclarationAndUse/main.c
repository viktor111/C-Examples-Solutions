#include<stdio.h>
#include<stdlib.h>

int main(void){
    void *pnt;

    int num;
    double x;
    char symb;

    pnt =&num;

    *((int*)pnt) = 512;

    printf("Number type int:\t%d\n",num);

    pnt = &x;

    *((double*)pnt) = 1.234567;

    printf("Number type double:\t%f\n",x);

    pnt = &symb;

    *((char*)pnt) = 'D';

    printf("Char type char:\t%c\n",symb);

    return 0;
}
    
