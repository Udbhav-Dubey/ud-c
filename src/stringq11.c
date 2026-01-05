// C program to find reverse of a string
#include <stdio.h>
int main(){
	int i=0,j=0;
	printf("C program to find reverse of a string\n");
	char str1[1000];
	fgets(str1,1000,stdin);
	char str2[1000];
	for(i=0;str1[i]!='\0';i++){
	if (str1[i]=='\n'){
		str1[i]='\0';
		break;
	}
}
	for (i=i-1;i>=0;i--){
	str2[j]=str1[i];
	j++;
	}
	str2[j]='\0';
	printf("%s",str2);
	printf("\n");
return 0;
}
