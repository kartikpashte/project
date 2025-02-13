#include<stdio.h>

    int main(){
        int day = 1;
    
        switch(day){
            case 1:
            printf("play");
            break;
            case 2:
            printf("restart");
            break;
            case 3:
            printf("about");
            break;
            case 4:
            printf("setting");
            break;
            case 5:
            printf("contact");
            break;
            default:
            printf("Invalid choice ");
        }
    }