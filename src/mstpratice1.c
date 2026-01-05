#include <stdio.h>
int main (){
	int i;
	char str[1000];
	fgets(str,1000,stdin);
	for (i=0;str[i]!='\0';i++){
		if (str[i]=='\n'){
			str[i]='\0';
			break;
		}
	}i--;
	int equal =0;
	for (int j=0;str[j]!='\0';j++){
		if (str[j]!=str[i]){
			equal =1;
		}
		i--;
	}
	if (equal==1){
		printf("not palindrome\n");
	}
	else {printf("palindrome\n");}
return 0;
}
