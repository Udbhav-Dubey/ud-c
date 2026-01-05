#include <stdio.h>
int main (){
/*bool a = True;
bool b = False; */
int num,even,z ;
printf("please enter the numeber\n");
scanf("%d",&num);
even = num%2;
if (num>0 && even==0){
printf("it is positive and even");
}
else if (num<0 && !even==0) {printf("not positive");}
else if (num>0 && !even==0) {printf("not even");}
else {printf("niether");}
return 0;
}
