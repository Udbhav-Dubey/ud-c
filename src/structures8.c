#include <stdio.h>
typedef struct students{
    int age ;
    int roll_numb;
    char name2 [1];
    char name [];
}stu;
int main(){
    printf("%d\n",sizeof(stu));
    return 0;
}
