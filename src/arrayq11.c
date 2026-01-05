#include <stdio.h>

int main() {
    int n;
    printf("Please enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize freq array
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Frequency count logic
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) { // Skip already counted elements
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Printing frequencies
    printf("\nElement Frequencies:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) { // Print only unique elements
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
