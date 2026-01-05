#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&arr[0];
    printf("%d\n",arr[0]);
    printf("%d\n",*ptr);
    printf("%p\n",&(*ptr));
    *ptr=*ptr+2;
    printf("%d\n",*ptr);
    return 0;
}
