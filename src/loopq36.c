// C program to print fibonacci series upto n terms
#include <stdio.h>
int main (){
	printf("enter the number till you want to find the series\n");
	int n;
	scanf("%d",&n);
	int a=0,b=1,c=0;
	for (int i=1;i<=n;i++){
	printf("%d ",c);
		a=b;
	b=c;
	c=a+b;
	}

return 0;
}
