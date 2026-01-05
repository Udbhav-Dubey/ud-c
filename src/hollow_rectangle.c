#include <stdio.h>
int main (){
	printf("enter the the sides of rectangle\nlength : ");
	int l,b;
	scanf("%d",&l);
	printf("breadth : ");
	scanf("%d",&b);
	for (int i=1;i<=l;i++){
		for (int j=1;j<=b;j++){
			if (i==1||i==l||j==1||j==b){
				printf("*");
			}
			else {printf(" ");}
		}
		printf("\n");
	}
return 0;
}
