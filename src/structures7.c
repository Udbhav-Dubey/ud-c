#include <stdio.h>
struct point {
    int x,y;
};
int main(){
    struct point p;
    p.x=10;
    p.y=12;
    struct point *ptr=&p;
    printf("%d %d \n",ptr->x,ptr->y);
    return 0;
}
