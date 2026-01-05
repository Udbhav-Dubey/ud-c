#include <stdio.h>
int main (){
	char str[1000];
	fgets(str,1000,stdin);
	for (int i=0;str[i]!='\0';i++){
		if (str[i]== '\n'){
			str[i]=='0';
			break;
		}
	}
	int words=0;
for (int i=0;str[i]!='\0';i++){
	if (str[i] ==' '||str[i]=='\n'){
	words++;
	}
}
printf("words are %d",words);
return 0;
}
