#include <stdio.h>
int main(){
int year ;
printf("please enter the year\n");
scanf("%d",&year);
(year % 4==0)? (year%100!=0)? printf("leap\n")
             : (year%400==0)? printf("leap\n")
             : printf("not leap\n")
             : printf("not leap\n");
return 0;
}
