#include <stdio.h>
#include <math.h>
int main (){
	printf("enter the number : ");
	int numb;
	scanf("%d",&numb);
	int digits = log10(numb)+1;
	printf("%d",digits);
return 0;
}
