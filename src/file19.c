#include <stdio.h>
#include <stdlib.h>

    struct person{
        int id;
        char fname[20];
        float age;
    };
int main (){
    FILE* fptr;
    fptr=fopen("file19.bin","wb");
    if (fptr==NULL){
        printf("not working\n");
        return 0;
    }
    struct person input1={1,"larry",13.4};
    int flag =0;
    flag=fwrite(&input1,sizeof(struct person),1,fptr);
    if (flag){
        printf("content written successfully");
    }
    else {
        printf("Error writing to file!");
    }
    fclose(fptr);
return 0;
}
