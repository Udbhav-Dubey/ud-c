// C program to delete duplicate elements from array
#include <stdio.h>
int main(){
    printf("please enter the index n\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("please enter the values of array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                for (int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("the array is \n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
