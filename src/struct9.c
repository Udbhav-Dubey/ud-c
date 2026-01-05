#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        getchar(); 
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s Roll: %d Marks: %.2f\n", 
               i + 1, s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

