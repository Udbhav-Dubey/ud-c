// C program to sort array in ascending or descending order
#include <stdio.h>
int main(){
    int n,temp;
    printf("no of elements in the array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
printf("sorted array is \n");
for (int j=0;j<n;j++){
    printf("%d  ",arr[j]);
}
printf("\n");
    return 0;
}
