// C program to find last occurrence of a character in a string
#include <stdio.h>

int main(){
	printf("to find last occurrence of a character in a string\n");
	char str[1000];
	fgets(str,1000,stdin);
	int length;
	for (length=0;str[length]!='\0';length++){
		if (str[length]=='\n'){
		str[length]='\0';
		break;
		}}
	printf("please enter the character\n");
	char c ;
	scanf(" %c",&c);
	int flag =-1;
	int j;
	for (j=0;str[j]!='\0';j++){
	       if (str[j]== c){
								flag =j;
								}
	}
	if (flag ==-1){
	   printf("character not in the string\n");
	}
	if (flag>=0) {printf("character %c is at %d\n",c,j);}
    return 0;
}
