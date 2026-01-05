// C program to merge two sorted array
#include <stdio.h>
int main(){
    int n,m;
    printf("number of elements in the \n array 1:");
    scanf("%d",&n);
    printf("number of elements in the \n array 2 :");
    scanf("%d",&m);
    int arr[n],arr2[m];
    printf("elements in array 1 is \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    printf("the elements in array2 is \n");
    for (int i=0;i<m;i++){
        scanf("%d",&arr2[i]);}
    int array[n+m];
    int k=0,i=0,j=0;
    while(i<n && j<m){
        if (arr[i]<=arr2[j]){
            array[k++]=arr[i++];
        }
        else { array[k++]=arr2[j++];}
    }
    while (i<n){ array[k++]=arr[i++];  }
    while (j<m){ array[k++]=arr2[j++];}
    printf("the elemets are : \n");
    for (int i=0;i<n+m;i++){
        printf("%d  ",array[i]);
    }
    printf("\n");
    return 0;
}
