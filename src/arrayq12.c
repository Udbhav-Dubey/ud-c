#include <stdio.h>
int main(){
    int n,count=0;
    printf("please enter the length of array\n");
    scanf("%d",&n);
    int arr[n],arrat[n],arra[n],temp;
    printf("please enter the values in the arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        arrat[i]= count;
        count =0;
    }
    for (int i=0;i<n;i++){
        if (arrat[i]==0){
            arra[i]=arr[i];
        }
    }
    printf("\nunique number are\n");
    for (int i=0;i<n;i++){
        printf("%d  ",arra[i]);
    }
    printf("\n");
    return 0;
}
