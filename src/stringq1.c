#include <stdio.h>
int main() {
    printf("To find the length of a string\nFirst, enter the string:\n");
    int count = 0;
    char str[50];
    fgets(str, 50, stdin);

    // Remove the newline character if it exists
    if (str[count] == '\n') {
        str[count] = '\0';
    }

    // Count the length of the string
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("String: %s\n", str);
    printf("Length: %d\n", count);
    return 0;
}
