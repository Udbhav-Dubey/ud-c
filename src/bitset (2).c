#include <stdio.h>
int main (){
int number,bit,set;
printf("please enter the number\n");
scanf("%d",&number);
printf("please enter the nth bit\n");
scanf("%d",&bit);
bit= (number>>bit) &1;
if (bit==1){printf("its 1\n");}
else {printf("its 0\n");}

return 0;
}
