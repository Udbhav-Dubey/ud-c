// C program to find maximum occurring character in a string
#include <stdio.h>
#include <string.h>
int main (){
		char str[1000];
		fgets(str,1000,stdin);
		int length = strlen (str);
		if (str[length-1] != '\n'){
				str[length-1] = '\0';
				length--;
		}
		int freq[256]={0};
		for (int i=0;str[i]!='\0';i++){
			freq[(int)str[i]]++ ;
		}
		int max=0,k=0;
		for (int i=0;i<256;i++){
			if (freq[i] >max){
				max = freq[i];
				k=i;	
			}
		}
		printf("the maximux occuring character in string is %c",k);
return 0;
}
