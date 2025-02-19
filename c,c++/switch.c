// #include<stdio.h>

//     int main(){
//         int day = 1;
    
//         switch(day){
//             case 1:
//             printf("play");
//             break;
//             case 2:
//             printf("restart");
//             break;
//             case 3:
//             printf("about");
//             break;
//             case 4:
//             printf("setting");
//             break;
//             case 5:
//             printf("contact");
//             break;
//             default:
//             printf("Invalid choice ");
//         }
//     }

#include <stdio.h>

int main()
{
    int ch;
    int ch2;
    printf("\n1)Play\n2)Settings\n3)About\n4)Exit\nEnter Chhoice from Above:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("The game is started...");
        break;
    case 2:
  
        printf("The Setting Page is opened...");
        printf("\n1)Keyboard\n2)Mouse\n3)Display\n4)Audio\nEnter Chhoice from Above:");
        scanf("%d", &ch2);
        switch (ch2)
        {
        case 1:
            printf("Keyboard Page is opened..");
            break;
        case 2:
            printf("Mouse Page is opened..");
            break;
        case 3:
            printf("Display Page is opened..");
            break;
        case 4:
            printf("Audio Page is opened..");
            break;
        default:
            printf("invalid");
            break;
        }

        break;
    case 3:
        printf("About Page is Opened...");
        break;
    case 4:
        printf("Game is exiting");
        break;
    default:
        printf("invalid ch");
    }
}