#include <stdio.h>
int main (){
    register int x=19;
     int *i=&x;
     printf("%d",*i);
     printf("%d",&i);
return 0;
}
