#include <stdio.h>
struct Student {
        char name [50];
        int age ;
        double grade ;
};
int main(){
    struct Student s1 ={"Abaca",16,82.5};
    struct Student s2 ={.age=18,.name="homie",.grade=90.2};
    printf("%s %d %f\n",s1.name,s1.age,s1.grade);
    printf("%s %d %lf\n",s2.name,s2.age,s2.grade);
    return 0;
}
