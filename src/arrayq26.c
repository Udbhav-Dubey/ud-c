#include <stdio.h>
int main (){
	int sum;
	printf("enter the elments of 2X2 matrice 1\n");
	int arr1[2][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
		scanf("%d",&arr1[i][j]);
		}}
	printf("enter the elements of 2X2 matrice 2\n");
	int arr2[2][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
		scanf("%d",&arr2[i][j]);
	}}
	int arr3[2][2];
	for (int row=0;row<2;row++){
		for (int col=0;col<2;col++){
			sum =0;
			for (int i=0;i<2;i++){
			sum += arr1[row][i]*arr2[i][col];	
			}
		arr3[row][col]=sum;
		}
	}
	printf("the product of matrices is \n");
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
return 0;
}
