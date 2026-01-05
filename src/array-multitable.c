#include <stdio.h>
int main (){
    int n,j=1;
    printf("please enter the number\n");
    scanf("%d",&n);
    int table[10];
    for (int i=0;i<10;i++){
    table[i]=n * j;
    printf("%d X %d= %d\n",n,j,table[i]);
    j++;
    }
    return 0;

}
