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
	for (row=0;row<3;row++)
	{
		sum =0;
		for (int col=0;col<3;col++){
			sum += arr[row][col];
		}
			printf("the sum of row %d is %d\n",row+1,sum);
		
	}
	for (col =0;col<3;col++){
		sum =0;
		for (int row =0;row<3;row++){
			sum += arr[row][col];
		}
			printf("the sum of col %d is %d\n",col+1,sum);

	}
	return 0;
}
