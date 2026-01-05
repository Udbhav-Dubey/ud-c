#include <stdio.h>
int main (){
	printf("please enter the side of mirrored right triangle :  ");
	int s;
	scanf("%d",&s);
	for (int i=1;i<=s;i++){
		for (int j=1;j<=s-i;j++){printf(" ");}
		for (int j=1;j<=i;j++){
			if (j==i||j==1||i==s){
			printf("*");}
		else {printf(" ");}}
		printf("\n");
	}
return 0;
}
