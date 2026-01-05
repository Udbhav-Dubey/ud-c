// C program to check alphabets using Conditional operator
#include <stdio.h>
int main (){
	printf("please enter the character\n");
	char ch;
	scanf("%d",&ch);
	getchar();
	((ch>='a' && ch <='z' )|| (ch>='A' && ch <='Z'))? printf("its an alfabet\n"): printf("not a doctor shhh\n"); 
return 0;
}
