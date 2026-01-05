#include <stdio.h>
int main(){
int y,x;
 x=0;
printf("please enter the number ");
 scanf("%d",&y);
printf("here you go\n");
do {
     printf("%d\n",x);
     if(x==y){break;}
     x++;

}while (x>0);
return 0;
}
