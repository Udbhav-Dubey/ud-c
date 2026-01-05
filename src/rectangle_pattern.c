#include <stdio.h>
int main (){
	printf("enter the sides of rectangle\nlength : ");
	int l;
	scanf("%d",&l);
	printf("breadth : ");
	int b;
	scanf("%d",&b);
	for (int i=1;i<=l;i++){
		for (int j=1;j<=b;j++){
			printf("*");
		}
			printf("\n");
	}
return 0;
}
