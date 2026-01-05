#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    FILE* fptr;
    char data[110]="udbhav dubey is weirdo \n"
                    "sometimes i fear he might be homelander";
    fptr=fopen("text3.txt","w");
    if (fptr==NULL){
        printf("the file is not opened");
    }
    else {printf("the file is now opened");}
    fputs(data,fptr);
    fputs("",fptr);
    fclose(fptr);
    printf("Data successfully written in file"
            "file.txt");
return 0;
}
