#include<stdio.h>
#include<stdlib.h>

int main(void){
   
    int a;
    double b;
    char s;

    int *p;
    double *q;
    char *r;

    p = &a;
    q = &b;
    r = &s;

    a = 100;
    b = 123.456;
    s = 'W';

    printf("Value %d is at adress %p\n", a, p);
    printf("Value %f is at adress %p\n", b, q);
    printf("Value %c is at adress %p\n", s, r);

    int nums[5] = {10, 20, 30, 40, 50};

    int *start = &nums[0];

    int k;

    for(k=0;k<5;k++){
        p= &nums[k];
        printf("%d\t%p\t%d\n", p - start, p, *p);
    }
    
    return 0;
}
    
