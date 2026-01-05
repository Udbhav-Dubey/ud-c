// C program to insert  elements in array
#include <stdio.h>
int main(){
    int n,m,a;
    printf("the number of elements are ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nelements are :");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\nhow many elements to add\n");
    scanf("%d",&m);
    int arr2[n+m];
    for (int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    for(int i=n;i<n+m;i++){
        scanf("%d",&arr2[i]);
    }
    printf("\nthe new array is :");
    for(int a=0;a<n+m;a++){
    printf("%d  ",arr2[a]);}
    printf("\n");
    return 0;
}
