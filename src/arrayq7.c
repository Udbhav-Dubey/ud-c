//C program to print all negative elements in array
#include <stdio.h>
int main(){
    int n,neg;
    printf("the number of values in the array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is \n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if (arr[i]<0){
            printf("%d   ",arr[i]);
            neg++;
        }
    }
    printf("\n the no of negative elements are %d\n",neg);

    return 0;
}
