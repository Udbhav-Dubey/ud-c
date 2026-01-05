#include <stdio.h>
int main (){
	printf("please enter the size of 2d array\nrow: ");
	int row,col;
	scanf("%d",&row);
	printf("column: ");
	scanf("%d",&col);
	int arr[100][100]={0};
	printf("enter the elements of array\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("your matrice is\n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("enter the element to insert : ");
	int el;
	scanf("%d",&el);
	printf("enter where you want to insert the element\nrow : ");
	int row1,col1;
	scanf("%d",&row1);
	printf("column: ");
	scanf("%d",&col1);
	col1--;
	row1--;
	row++;
	for (int i=row-1;i>row1;i--){
		for (int j=col-1;j>0;j--){
			arr[i][j]=arr[i-1][j];
		}
	}
	
	arr[row1][col1]=el;
    for (int j = col+1; j < col ; j++) {
        arr[row - 1][j] = 0;
    }
	printf("your matrice is \n");
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

return 0;
}
