// Program to find first occurrence of character in string
#include <stdio.h>
#include <string.h>
int main (){
int flag =-2;
		char str[1000];
		fgets(str,1000,stdin);
		int length =strlen(str);
		if (str[length]=='\n'){
			str[length]='\0';
			length--;
		}
		printf("enter the character to find its first occurence\n");
		char ch;
		scanf("%c",&ch);
		int i;
		for (i=0;str[i]!='\0';i++){
				if (str[i]==ch){
					int flag = i;
					break;
				}
		}
		printf("character %c is at %d",ch,i);
return 0;
}
