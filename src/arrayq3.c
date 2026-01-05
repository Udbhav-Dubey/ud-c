//C program to find sum of array elements
#include <stdio.h>
int main(){
    int n,sum;
    printf("please tell the number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements are ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("the sum of elements is ");
    for (int i=0;i<n;i++){
        sum += arr[i] ;

    }
    printf("%d\n",sum);
    return 0;
}
