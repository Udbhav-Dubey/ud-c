//program to find upper triangular matrix
#include <stdio.h>
int main (){
	printf("please enter the elements of 3X3 matrice\n");
	int arr[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int upper=0;// stays 0 if its upper
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (i>j&&arr[i][j]!=0){
				upper=1;
			}
		}
	}
	if (upper==1){
		printf("not a upper triangle matrix\n");
	}
	if (upper==0){
		printf("upper triangle matrix\n");
	}
return 0;
}
