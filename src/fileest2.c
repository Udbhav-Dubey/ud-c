#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    char data [110]="you stupid son of a bitch \n"
                    "thats the bottom line\n";
    int a = strlen(data);
    FILE* fptr=fopen("fileest2.txt","w");
    if (fptr==NULL){
        printf("the file is not opened");
    }
    else {printf("file is now opened\n");
        fputs(data,fptr);
        fputs("",fptr);
        fprintf(fptr,"size of data is %d",a);
        system("xdg-open fileest2.txt");
    }
    
return 0;
}
