#include<stdio.h>

int main(){

    // 1 while loop - Entry Control Loop

    int i=1;

    while(i>=10){
        printf("%d\t",i);
        i+=1;
    }

    // 1 do while loop - Exit Control Loop
    i=1;
    printf("\n");
    do{
        printf("%d\t",i);
        i+=1;  
    }while(i>=10);

    // For Loop - ShortHand Loop
    int j;
    for(j=0;j<=10;j++){
        printf("%d\t",j);
    }
}