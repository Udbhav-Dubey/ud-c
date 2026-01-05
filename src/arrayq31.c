// program to find sum of each row and columns of a matrix
#include <stdio.h>
int main (){
	int sum=0,row=0,col=0;
	printf("enter the elements of 3X3 matrice\n");
	int arr [3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		int temp = arr[i][i];
		arr[i][i]=arr[i][3-i-1];
		arr[i][3-i-1]=temp;
	}
	printf("the swapped matrix will be\n");
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

