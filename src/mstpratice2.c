#include <stdio.h>
#include <string.h>
int main (){
	char str[1000];
	fgets(str,1000,stdin);
	for (int i=0;str[i]!='\0';i++){
		if (str[i]=='\n'){
			str[i]='\0';
			break;
		}
	}
	int j=0;
	int len = strlen(str);
	int wordstart=len-1;
	int wordend=len-1;
	char reverse [1000];
	for (int wordstart=len-1;wordstart>=0;wordstart--){
		if (str[wordstart] == ' '){
			int i = wordstart+ 1;
			for (j=0;j<=wordend;j++){
				reverse[j]=str[i];
				i++;
			}
			reverse [j++]=' ';
			wordend=wordstart-1;
		}
		wordstart--;
	}
	for (int k=0;k<=wordend;k++)
	{
		reverse[j]=str[k];
		j++;
	}
	reverse[j]='\0';
	printf("the reversed string is \n%s",reverse);
return 0;
}
