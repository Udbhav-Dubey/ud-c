// C program to left rotate an array
#include <stdio.h>
int main(){
    printf("please enter the index of the array\n");
    int n,r,temp;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\ninput number of times to rotate left \n");
    scanf("%d",&r);
    for (int j=0;j<r;j++){
            temp = arr [0];
        for (int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("after rotation \n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
