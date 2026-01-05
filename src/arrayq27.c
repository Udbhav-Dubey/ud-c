//C program to check whether two matrices are equal or not
#include <stdio.h>
int main (){
	int flag;
	printf("enter the elements of matrice 1\n");
	int arr1[2][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the elements of matrice 2\n");
	int arr2[2][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			if (arr1[i][j]!=arr2[i][j]){
				flag =2;
			}
		}
	}
	if (flag ==2){printf("not equal matrice\n");}
	else {printf("equal\n");}
return 0;
}
