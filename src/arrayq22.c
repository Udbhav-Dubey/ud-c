//C program to right rotate an array
#include <stdio.h>
int main(){
    printf("please enter the index of the array\n");
    int n,r,temp;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is ");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\ninput number of times to rotate right \n");
    scanf("%d",&r);
   	for (int i=0;i<r;i++){
		temp = arr[n-1];
		for (int j=n-1;j>0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
    printf("after rotation \n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}
