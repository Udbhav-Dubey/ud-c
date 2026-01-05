#include <stdio.h>
int main (){
	printf("enter the side of square : ");
	int s;
	scanf("%d",&s);
	int diag=0;
	for (int i=1;i<=s;i++){
		for (int j=1;j<=s;j++){
			if (i==1||i==s||j==1||j==s||i==j||j==(s-i+1)){
				printf("*");
			}
			else {printf(" ");}
		}
		printf("\n");
	}
return 0;
}
