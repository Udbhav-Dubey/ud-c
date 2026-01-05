#include <stdio.h>
#include <stdlib.h>

struct A{
    int x;
}b;

void increament(struct A* a){
    a->x++;

}

int main() {
   struct A* a=&b;
   printf("Enter a number");
   scanf("%d", &a->x);
   increament(a);
   printf("a->x: %d", a->x);
   return 0;
}
