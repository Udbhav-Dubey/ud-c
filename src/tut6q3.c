//Check the size of various pointer variables for int, char, float etc.
#include <stdio.h>
int main (){
    int *px;
    float *pf;
    char *pc;
    printf("%d %d %d",sizeof(px),sizeof(pf),sizeof(pc));
return 0;
}
