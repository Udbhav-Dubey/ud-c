#include <stdio.h>
int f(void){
    return 50;
}
int main (){
    static int i=f();
    printf("%d",i);
return 0;
}
