#include <stdio.h>

void greet();
int add(int ,int );

int main(){
    greet();
}
void greet(){
    printf("Hello World");
    printf("\n%d",add(20,30));
    printf("\n%d",add(40,50));
}
int add(int a,int b){
    return a+b;
}