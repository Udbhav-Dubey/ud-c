#include <stdio.h>
int main(){
    int row1[4]={10,20,30,40};
    int row2[2]={45,32};
    int *jagged[2]={row1,row2};
    int size[2]={4,2};
    for(int i=0;i<2;i++){
        int *ptr=jagged[i];
        for(int j=0;j<size[i];j++){
            printf("%d  ",*ptr);
            *ptr++ ;

        }
        printf("\n");
    }
    return 0;
}
