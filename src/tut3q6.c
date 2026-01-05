#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);

    if (days <= 5) {
        printf("Fine is 50 paisa\n");
    } else if (days <= 10) {
        printf("Fine is 1 rupee\n");
    } else if (days <= 30) {
        printf("Fine is 5 rupees\n");
    } else {
        printf("Membership canceled\n");
    }

    return 0;
}
