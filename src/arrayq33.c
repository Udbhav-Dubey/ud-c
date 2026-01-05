//program to find lower triangular matrix
#include <stdio.h>
int main (){
	printf("please enter the elements of 3X3 matrice\n");
	int arr[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int lower=0;// stays 0 if its lower
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			if (i<j&&arr[i][j]!=0){
				lower=1;
			}
		}
	}
	if (lower==1){
		printf("not a lower triangle matrix\n");
	}
	if (lower==0){
		printf("lower triangle matrix\n");
	}
return 0;
}
