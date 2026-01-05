#include <stdio.h>
int main (){
    char S[]="KakarotsHyperr";
    char *ptr=S;
    for(int i=0;*ptr!='\0';ptr++){
        printf("%c\n",*ptr);
      }
      //printf("%s\n",S);
    return 0;
}
