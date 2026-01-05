//Display month name according to the month number using Switch Statement
#include <stdio.h>
int main (){
    int num=0;
    scanf("%d",&num);
    if (num>12){printf("nah\n");return 0;}
    else {switch(num){
    case 1:
        printf("jan\n");
        break;
    case 2:
        printf("feb\n");
        break;
    case 3:
        printf("march\n");
        break;
    case 4:
        printf("april\n");
    break;
    case 5:
        printf("may\n");
        break;
    case 6:
        printf("june\n");
        break;
    case 7:
        printf("july\n");
        break;
    case 8:
        printf("augest\n");
        break;
    case 9:
        printf("september\n");
        break;
    case 10:
        printf("october\n");
    break;
    case 11:
        printf("nov\n");
    break;
    case 12:
        printf("dec\n");
    break;
    }}
return 0;
}
