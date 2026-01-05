// C program to sort even and odd elements of array separately
#include <stdio.h>
int main(){
    printf("please enter the index n\n");
    int n,temp,o=0,e=0;
    scanf("%d",&n);
    int arr[n],arrodd[n],arreven[n];
    printf("please enter the values of array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is ");
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
    printf("\nthe sorted array is ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            arreven[e++]=arr[i];
        }
        else {arrodd[o++]=arr[i];}
    }
    printf("\nthe even is ");
    for (int i=0;i<e;i++){
        printf("%d  ",arreven[i]);
    }
    printf("\nthe odd is ");
    for (int i=0;i<o;i++){
        printf("%d  ",arrodd[i]);
    }
    printf("\n");
    return 0;
}
