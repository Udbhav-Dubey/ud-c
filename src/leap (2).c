// C program to check Leap Year
#include <stdio.h>
int main (){
      int x,y;
      printf("C program to check Leap Year, please enter the year\n");
      scanf("%d",&x);
      y=x%4;
      if (y==0){
                  printf("%d is a leap year\n",x);}
      else {printf("%d is not a leap year\n",x);}
return 0;
}
