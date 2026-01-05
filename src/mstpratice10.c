// C program to remove all repeated characters in a string
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
	int k=0;
	char str1[1000];
	int freq[256]={0};
	for (int i=0;str[i]!='\0';i++){
		if (freq[(int)str[i]]==0){
			 str1[k++]=str[i];
		freq[(int)str[i]] = 1;
		}
	}
	str1[k]='\0';
		printf("final string is %s",str1);
return 0;
}

