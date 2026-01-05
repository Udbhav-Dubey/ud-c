#include <stdio.h>
int main (){
int leap;
printf("please enter the year \n");
scanf("%d",&leap);
int z = leap%400;
(z=0)? printf("the year %d is leap\n",leap)
        : printf("the year %d is not leap\n",leap);
return 0;
}
