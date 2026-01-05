//Delete a given element in an array
#include <stdio.h>
int main (){
    int arr[100];
    printf("enter the number of elements\n");
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter at which position you wanna delete");
    int del;
    scanf("%d",&del);
    del--;
    for (int i=del;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
return 0;
}
