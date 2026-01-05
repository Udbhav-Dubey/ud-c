#include <stdio.h>
int main (){
    int i =34;
    int *j= &i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of j is %p\n",&j);
    printf("the value of j is %p\n", *(&j));
    return 0;
}
