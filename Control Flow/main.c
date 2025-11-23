#include <stdio.h>
#include <stdlib.h>

int main()
//
{ int correctPIN;

printf("input PIN\n");
scanf("%d",&correctPIN);

if(correctPIN==1312){
    printf("correctPIN\n");

}else{
    printf("invalidPIN\n");
}if(correctPIN<=999)
{
    printf("shortPIN\n");
}
else if(correctPIN>=9999)
{
    printf("too long PIN\n");
}
else{
    printf("correct length\n");
}
int choice;
    printf("Select an option:\n");
    printf("1.Open Door\n");
    printf("2. Change PIN\n");
    printf("3.Exit\n");
    scanf("%d",&choice);

switch (choice){

    case 1:
        printf("door is unlocked\n");
        break;
    case 2:
        printf("password change coming soon\n");
        break;
    case 3:
        printf("exit success\n");
        break;
    default:
        printf("invalid option\n");
        break;
}

    return 0;
}

