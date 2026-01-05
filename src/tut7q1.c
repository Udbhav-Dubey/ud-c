//to input and output 3 names, roll numbers and marks. using structures.
#include <stdio.h>
struct A{
    int roll;
    float marks;
    char name[30];
};
int main (){
    int n;
    scanf("%d",&n);
    struct A a[n];
    for(int i=0;i<n;i++){
        printf("name : ");
        scanf("%s",&a[i].name);
        printf("marks : ");
        scanf("%s",&a[i].marks);
        printf("roll : ");
        scanf("%s,"&a[i].roll);
    }
    for (int i=0;i<n;i++){
        printf("name : %s\n",a[i].name);
        printf("marks : %f\n",a[i].marks);
        printf("roll : %d\n",a[i].roll);
    }
return 0;
}
