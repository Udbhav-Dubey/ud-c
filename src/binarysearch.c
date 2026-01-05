#include <stdio.h>
int main (){
	printf("enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array : ");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
					}
		}
	}
	int left ,right,mid,target,found=0;
	printf("enter the element to find in the array : ");
	scanf("%d",&target);
	left = 0;
	right =n-1;
	while (left<=right){
		mid = left+(right-left)/2;
		if(arr[mid]==target){printf("element is at position %d",mid); found = 1 ;break; }
		if (arr[mid]>target) { right = mid -1 ;} else {left =mid+1;}
	}
	if (found !=1){printf("element not found\n");}
return 0;
}
