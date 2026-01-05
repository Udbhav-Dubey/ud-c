#include <stdio.h>
#include <string.h>
struct A {
    char name [50];
    int age;
};
void changing (struct A *a){
    a->age++;
    strcpy(a->name,"dubey");
}
int main (){
    struct A a ;
    a.age =10;
    strcpy(a.name,"udbahv");
    changing(&a);
    printf("%d %s\n",a.age,a.name);
    return 0;
}
