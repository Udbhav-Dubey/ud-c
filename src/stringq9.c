//C program to count total number of vowels and consonants in a string
#include <stdio.h>
int main (){
    int i,j=0;
	int vowels =0;
	printf("C program to count total number of vowels and consonants in a string\n");
	char str[100];
	fgets(str,100,stdin);
	for (int j=0;str[j]!='\0';j++){
		if (str[j]=='\n'){
		str[j]='\0';
		break;
		}}
	for (i=0;str[i]!='\0';i++){
	   if (str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85||str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117){
				vowels++;
				}
	}
	printf("number of vowels are : %d\nnumber of consonants are :%d\n",vowels,i-vowels);
	return 0;
}
