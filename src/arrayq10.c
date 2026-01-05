//C program to delete element from an array
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
    printf("tell the position to delete\n");
    scanf("%d",&m);
    if (m<0 || m>n){printf("invalid");}
        else {
            for (int i=m-1;i<n-1;i++){
                arr[i]=arr[i+1];
            }
            n--;
        }
    printf("elements after deletion is");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
