#include <stdio.h>
int main (){
	printf("please enter the side of rhombus to print : ");
	int s ;
	scanf("%d",&s);
	for (int i=1;i<=s;i++){
		for (int j=1;j<=s-i;j++){
			printf(" ");
		}
		for (int j=1;j<=s;j++){
			printf("*");
		}
		printf("\n");
	}
return 0;
}
