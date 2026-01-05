#include <stdio.h>
struct  child {
    int x;
    char c;
};
struct parent {
    int a;
    struct child q;
};
int main(){
    struct parent p ={45,17,'M'};
    printf("%d %d %c\n",p.a,p.q.x,p.q.c);
    return 0;
}
