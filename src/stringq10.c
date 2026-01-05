//C program to count number of words in a string
#include <stdio.h>
int main (){
    int i,j=0;
	int words =0;
	printf("C program to count number of words in a string\n");
	char str[100];
	fgets(str,100,stdin);
	for (int j=0;str[j]!='\0';j++){
		if (str[j]=='\n'){
		str[j]='\0';
		break;
		}}
	for(int i=0;str[i]!='\0';i++){
				if (str[i]==' '||str[i]=='\n'||str[i]=='\t'){
				    words++;
				}
	}
	printf("words :%d\n",words);

	return 0;
}
