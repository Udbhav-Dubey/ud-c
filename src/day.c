// Write a C program to input week number(1-7) and print day of week name using switch case. C program to find week day name using switch case. How to find day name of week using switch case in C programming.
#include <stdio.h>
#include <stdlib.h>
int main (){
int number;
printf("please enter the number\n");
scanf("%d",&number);
if (number >7){
exit (0);
}
printf("the day of the week is ");
switch (number){
case 1 : printf("Monday\n");
break;
case 2 : printf("Tuesday\n");
break;
case 3 : printf("Wednesday\n");
break;
case 4 : printf("Thursday\n");
break;
case 5 : printf("Friday\n");
break;
case 6 : printf("Saturday\n");
break;
case 7 : printf("Sunday\n");
break;
}
return 0;
}
