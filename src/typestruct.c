#include <stdio.h>
typedef struct Students {
    int age ;
    char name [50];
}stu;
int main(){
    stu s={14,"udbhav"};
    printf("%d %s\n",s.age,s.name);
    return 0;
}
