#include <stdio.h>
static int globalvar=5;
void display(){
    printf("%d\n",globalvar);
}
int main (){
    display();
    globalvar=10;
    display();
return 0;
}
