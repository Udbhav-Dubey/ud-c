// C program to search element in an array
#include <stdio.h>
int main(){
    int n,ele,nah,yah;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements are :");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nthe element you need ");
    scanf("%d",&ele);
    for (int i=0;i<n;i++){
        if (arr[i]==ele){
            printf("element is at position %d\n",i+1); yah=1;
}
        }
    if (yah!=1){
        printf("no such element\n");
    }

    return 0;
}
