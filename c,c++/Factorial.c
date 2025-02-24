#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("0");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial is %d",fact);
    }
}