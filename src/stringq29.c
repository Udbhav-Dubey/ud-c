// C program to find last occurrence of a word in given string
#include <stdio.h>
#include <string.h>
int main (){
	char str[1000];
	fgets(str,1000,stdin);
	int len=strlen(str);
	if (str[len-1]='\n'){
		str[len-1]='\0';
		len--;
	}
	char word[1000];
	int last_index=-1;
	gets(word);
	for (int i=0;str[i]!='\0';i++){
		for (int j=0;word[j]='\0';j++){
			if (str[i+j]!=word[j]){
				break;
			}
			if (word[j]='\0'){
				last_index=i;	
			}
		}
		if (last_index!=-1) printf("last occurence of the word at %d\n",last_index);
	}
return 0;
}
