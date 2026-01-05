//program to subtract two matrices
#include <stdio.h>
int main (){
printf("enter the elements in 2X2 matrice 1 \n");
int arr1[2][2];
for (int i=0;i<2;i++){
	for (int j=0 ;j<2;j++){
		scanf("%d",&arr1[i][j]);
	}
}
printf("enter the elements in 2X2 matrice 2 \n");
	int arr2[2][2];
	for (int i=0;i<2;i++){
		for (int j=0 ;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
printf("subtracted array is \n");
for (int i=0;i<2;i++){
	for (int j=0;j<2;j++){
	printf("%d  ",arr1[i][j]-arr2[i][j]);
	}
	printf("\n");
}
return 0;
}
