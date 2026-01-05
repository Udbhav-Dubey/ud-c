// Write a C program to input month number and print total number of days in month using switch...case. C program to find total number of days in a month using switch...case. Logic to print number of days in a month using switch...case in C programming.
#include <stdio.h>
int main (){
int mn; // mn is month number
printf("please enter the month number\n");
scanf("%d",&mn);
switch (mn){
case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10 :
case 12 :
printf("31\n");
break;
case 4 :
case 6 :
case 9 :
case 11 :
printf("30\n");
case 2 :
int year;
printf("please enter the year\n");
scanf("%d",&year);
break;
if (year%400==0){
printf("29\n");
}
else {printf("28\n");}
}
return 0;
}
