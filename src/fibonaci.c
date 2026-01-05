#include <stdio.h>
int fib (int x){
    if (x==0){
        return 0;
    }
    else if (x==1){
        return 1;
    }
    else {
        return fib (x-1)+ fib (x-2);
    }
}
int main (){
    int n;
    printf("please enter the number\n");
    scanf("%d",&n);
    printf("Fibonachi series : ");
    for (int i=0;i<n;i++){
        printf("%d\n",fib(i));
    }
    return 0;
}
