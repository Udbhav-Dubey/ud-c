#include <stdio.h>
int main(){
    int n,max;
    printf("how many numbers : ");
    scanf("%d",&n);
    int arr [n];
    printf("enter the numbers : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is  ");
    for(int i=0;i<n;i++){
        printf("%d , ",arr[i]);}
    max=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    printf("\n%d is max\n",max);
    return 0;
}
