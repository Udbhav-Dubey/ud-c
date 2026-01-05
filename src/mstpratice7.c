// C program to remove first occurrence of a character from string
#include <stdio.h>
#include <string.h>
int main (){
	char str[1000];
	fgets(str,1000,stdin);
	int length = strlen(str);
	if (str[length-1]=='\n'){
		str[length-1]='\0';
		length--;
	}
	printf("enter the character to remove");
	char ch;
	int i;
	scanf("%c",&ch);
	for (i=0;str[i]!='\0';i++){
		if (str[i]==ch){
			break;
		}
	}
	for (int j=i+1;str[j]!='\0';j++){
		str[i]=str[j];
		j++;
	}
	printf("%s",str);
	return 0;
}
