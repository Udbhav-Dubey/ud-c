// Write a C program to read and print elements of array. – using recursion.
#include <stdio.h>
void print(int arr[],int n,int index){
    if (index==n) return ;
    printf("%d ",arr[index]);
    print(arr,n,index+1);
}
int main(){
    int n;
    printf("no of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    print(arr,n,0);
    printf("\n");
    return 0;
}
