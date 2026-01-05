#include <stdio.h>
struct student{
char name[50];
int age;
float grade;
};
int main (){
    struct student s1={"rahul",20,18.5};
    struct student s2={.age=16,.name="vikas",.grade=22};
    printf("%s\t%d\t%f\n",s1.name,s1.age,s1.grade);
    printf("%s\t%d\t%f\n",s2.name,s2.age,s2.grade);
return 0;
}
