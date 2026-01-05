//  Write a C program to input data for two students, display their information, and find the average of total marks.
#include <stdio.h>
#include <string.h>
struct A {
    char name[50];
    int age ;
    float total_marks;
}a,b;
int main(){
    printf("please enter the value for student 1\nenter the age:");
    scanf("%d",&a.age);
    getchar();
    printf("enter the name:");
    fgets(a.name,50,stdin);
     a.name[strcspn(a.name, "\n")] = 0;
    printf("\nplease enter total marks:");
    scanf("%f",&a.total_marks);
    printf("please enter the value for student 2\nenter the age:");
    scanf("%d",&b.age);
    getchar();
    printf("enter the name:");
    fgets(b.name,50,stdin);
     b.name[strcspn(b.name, "\n")] = 0;
    printf("\nplease enter total marks:");
    scanf("%f",&b.total_marks);
    printf("student1\nname : %s\nage : %d\nmarks :%f\n",a.name,a.age,a.total_marks);
    printf("student1\nname : %s\nage : %d\nmarks :%f\n",b.name,b.age,b.total_marks);
    printf("average would be %f",(a.total_marks+b.total_marks)/2);
    return 0;
}
