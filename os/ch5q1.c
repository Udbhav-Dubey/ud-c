#include <stdio.h>
#include <unistd.h>
int main (){
    int x=100;
    if (fork()==0){
        printf("the value of x in child is %d \n",x);
        x=10;
        printf("the value of x in child is %d \n",x);
    }
    else {
        printf("the value of x in parent is %d\n",x);
        x=30;
        printf("the value of x in parent is %d\n",x);
    }
    x=50;
    return 0;
}
