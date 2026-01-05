// C program to count even and odd elements in array
#include <stdio.h>
int main(){
    int n,even,odd;
    printf("number of elements in array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\neven numbers : ");
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            printf("%d  ",arr[i]);
            even++;
        }
    }
    printf("\nthe odd numebrs are ");
    for (int i=0;i<n;i++){
        if (arr[i]%2 !=0){
            printf("%d  ",arr[i]);
            odd++;
        }
    }
    printf("\nodd elements are : %d \neven elements are : %d\n",odd,even);


    return 0;
}
