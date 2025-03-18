#include <stdio.h>  

int main() {   
    int a = 10;
    int *p = &a; // pointer to a
    int **dp = &p;

    printf("Value of a: %d\n", a); // address of a
    printf("Address of a: %p\n", &a); // address of a
    printf("Value of P: %p\n", p); // value of a
    printf("Address of P: %p\n", &p); // value of a
    printf("Value of A using Ptr: %d\n", *p); // value of 
    printf("Address of p using DPtr: %p\n", dp); // address of a
    printf("Address of dp : %p\n", &dp); // address of a
    printf("value of p  using dp: %p\n", *dp); // address of a
    printf("value of A  using dp: %d\n", **dp); // address of a

}