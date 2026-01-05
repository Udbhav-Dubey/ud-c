// C program to find second largest number in array
#include <stdio.h>
int main(){
    int n,max;
    printf("enter the number of element in array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max is %d\n",max);
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if (max2<arr[i]&& arr[i]!=max){
            max2=arr[i];
        }
    }
    printf("the the second max is %d\n",max2);
    return 0;
}
