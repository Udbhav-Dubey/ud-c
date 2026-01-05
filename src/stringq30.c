// C program to search all occurrences of a word in given string
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
	gets(word);
	int ,count =0;
	for (int i=0;str[i]!='\0';i++){
		for (int j=0;word[i]!='\0';j++){
			if (word[i]!=str[i+j]){
				break;
			}
			if (word[j]=='\0'){
				count ++;
			}
		}
	}
	printf("occurences : %d\n",count);
return 0;
}

