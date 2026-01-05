#include <stdio.h>
int main (){
    int n;
    printf("please enter the number length of array\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the value for index %d : ",i);
        scanf("%d",&arr[i]);
        }
    for (int i=0;i<n;i++){
        printf("%d    ",arr[i]);
    }
    printf("\n");
    return 0;
}
int rev(int *arr ,int n ){
    int i=n-1,k=0,arr[n];
    for (int i=n-1;i>=0;i=i-1){
        boi[(n-i-1)]=boy[i];
        k++;
}
