// program to perform Scalar matrix multiplication
#include <stdio.h>
int main (){
printf("enter the elements in 2X2 matrice \n");
int arr1[2][2];
for (int i=0;i<2;i++){
	for (int j=0 ;j<2;j++){
		scanf("%d",&arr1[i][j]);
	}
}
printf("enter the scalar number to multiply\n");
int s;
scanf("%d",&s);
for (int i=0;i<2;i++){
	for (int j=0;j<2;j++){
	printf("%d  ",(arr1[i][j]*s));
	}
	printf("\n");
}
return 0;
}
