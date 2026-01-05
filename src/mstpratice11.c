// C program to replace all occurrences of a character in a string
#include <stdio.h>
#include <string.h>
int main (){
	printf("enter the string\n");
	char str[1000];
	fgets(str,1000,stdin);
	int length = strlen(str);
	if (str[length-1]=='\n'){
		str[length-1]='\0';
		length--;
	}
	printf("enter the character to be replaced\n");
	char ch,ch1;
	scanf("%c",&ch);
	getchar();
	printf("enter the character to be replaced with\n");
	scanf("%c",&ch1);
	for (int i=0;str[i]!='\0';i++){
		if (str[i]==ch){
			str[i]=ch1;
		}
	}
		printf("final string is %s",str);
return 0;
}

