//C program to find sum of array elements
#include <stdio.h>
int main(){
    int n;
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
        if (i=0){arr[i]=arr[i];}
            else {arr[i] =+ arr[i-1];}

    }
    printf("%d",arr[n]);
    return 0;
}
