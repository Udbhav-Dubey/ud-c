// C program to check whether a character is alphabet or not
#include <stdio.h>
int main (){
      char x,y;
      printf("C program to check whether a character is alphabet or not, please enter your alphabet\n");
      scanf("%c",&x);
      if (x>=65 && x<=90 || x>=97 && x<=122 ){printf("it is a character\n");}
      else {printf("not a character\n");}
return 0;
}
