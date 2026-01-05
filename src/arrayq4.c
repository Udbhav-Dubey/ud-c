//C program to find sum of array elements using recursion
#include <stdio.h>
int add(int arr[],int start,int n){
    if(start>=n){
        return 0;}
    else {return (arr[start]+add(arr,start+1,n));}
}
int main(){
    int n,start,result;
    printf("no of elements is");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    result=add(arr,0,n);
    printf("%d\n",result);
    return 0;
}
