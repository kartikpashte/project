#include <stdio.h>

int main() {
    int marks[] = {80, 70, 90, 60, 85};
    int arr[5];

    arr[0]=1;

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Array ELement : ");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
        
    }
    
}