#include <stdio.h>
#include <string.h>
int main (){
	printf("enter the strings to check for anagram\n");
	char str1[1000];
	char str2[1000];
	fgets(str1,1000,stdin);
	int len1 = strlen(str1);
	if(str1[len1-1]=='\n'){
		str1[len1-1]='\0';
		len1--;
	}
	fgets(str2,1000,stdin);
	int len2 = strlen(str2);
	if(str2[len2-1]=='\n'){
		str2[len2-1]='\0';
		len2--;
	}
	if (len1!=len2){
		printf("not a anagram\n");
		return 0;
	}
		int freq[256]={0};
		for (int i=0;str1[i]!='\0';i++){
			freq[(int)str1[i]]++;
			freq[(int)str2[i]]--;
		}
		for (int i=0;i<256;i++){
		if (freq[i]!=0){
			printf("not a anagram\n");
			return 0;
		}
		}
		printf("anagram\n");
	
return 0;
}
