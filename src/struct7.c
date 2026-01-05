#include <stdio.h>
struct point {int x,y;};
int main (){
struct point p ;
struct point  *ptr =&p;
ptr->x=130;
ptr->x=13;
printf("%d %d",ptr->x,ptr->y);
return 0;
}
