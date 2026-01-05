#include <stdio.h>
#include <stdlib.h>
int main(){
int  *arr=(int *)malloc(sizeof(int) * 5);
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        printf("%d", arr[i]);
    }
return 0;
}
