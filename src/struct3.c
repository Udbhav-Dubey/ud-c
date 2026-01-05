#include <stdio.h>
struct Student {
    int id;
    char grade;
};
int main (){
    struct Student s1={1,'A'};
    struct Student s1c=s1;
    printf("Student 1 ID : %d\n",s1c.id);
    printf("Student 1 grade : %c",s1c.grade);
return 0;
}

