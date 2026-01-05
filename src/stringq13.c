//C program to reverse order of words in a string
#include <stdio.h>
int main(){
    int i;
	printf("C program to reverse order of words in a string\n");
	char str1[1000];
	char str2[1000];
	fgets(str1,1000,stdin);
	for (i=0;str1[i]!='\0';i++){
		if (str1[i]=='\n'){
		str1[i]='\0';
		break;
		}}
	--i;
	printf("%d\n",i);
	for (int j=0;str2[j]!='\0';j++){
	    str2[j]=str1[i];
	i--;
	}
	printf("%s\n",str1);
	printf("%s\n",str2);
return 0;
}
