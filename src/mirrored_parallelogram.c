#include <stdio.h>
int main (){
	printf("please enter the sides of parallelogram\nlength : ");
	int l,b;
	scanf("%d",&l);
	printf("breadth : ");
	scanf("%d",&b);
	for (int i=1;i<=l;i++){
		for (int j=1;j<i;j++){
			printf(" ");
		}
		for (int j=1;j<=b;j++){
			printf("*");
		}
		printf("\n");
	}
return 0;
}
