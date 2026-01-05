// grading
#include <stdio.h>
int main (){
      int x,y;
      printf("To find your grade please enter your marks\n");
      scanf("%d",&x);
      if (x>90 && x<=100){
                              printf("A\n");}
if (x>80 && x<=90){
                              printf("B\n");}
if (x>70 && x<=80){
                              printf("C\n");}
if (x>60 && x<=70){
                              printf("D\n");}
if (x>=50 && x<=60){
                              printf("E\n");}
if (x<50){
                              printf("F\n");}
else {printf("invalid\n");}

return 0;
}
