#include <stdio.h>
#include <stdlib.h>
int main (){
FILE* fptr=fopen("file11.txt","r");
char data[100];
while(fgets(data,sizeof(data),fptr)!=0)
printf("%s",data);
fclose(fptr);
system("xdg-open file11.txt");
return 0;
}
