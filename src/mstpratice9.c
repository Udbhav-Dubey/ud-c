// C program to remove all occurrences of a character from string
#include <stdio.h>
#include <string.h>
int main (){
	printf("enter the string\n");
	char str[1000];
	fgets(str,1000,stdin);
	int length = strlen(str);
	if (str[length-1]='\n'){
		str[length-1]='\0';
		length--;
	}
	printf("enter the character to remove \n");
	char ch;
	int flag;
	scanf("%c",&ch);
	for (int i=0;str[i]!='\0';i++){
		if (ch==str[i]){
			flag =i;	
		
	for (int j=flag;str[j]!='\0';j++){
		str[j]=str[j+1];
	}}}
	printf("final string is %s",str);
return 0;
}
