#include <stdio.h>
int main (){
	printf("enter the rows of triangle : ");
	int r;
	scanf("%d",&r);
	for (int i=1;i<=r;i++){
		for (int j=1;j<=i;j++){
			if (j==i||i==r||j==1){
				printf("*");
			}
			else {printf(" ");}
		}
		printf("\n");
	}
return 0;
}
