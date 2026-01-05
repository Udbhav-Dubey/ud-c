#include <stdio.h>
#include <math.h>

int main() {
    float numbers[5];
    float sum = 0, avg, max, min, stddev, variance = 0;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    avg = sum / 5;

    // Initialize max and min
    max = numbers[0];
    min = numbers[0];

    // Calculate max and min
    for(int i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Calculate variance
    for(int i = 0; i < 5; i++) {
        variance += pow(numbers[i] - avg, 2);
    }
    variance /= 5;
    stddev = sqrt(variance);

    // Output results
    printf("Average = %.2f\n", avg);
    printf("Maximum = %.2f\n", max);
    printf("Minimum = %.2f\n", min);
    printf("Standard Deviation = %.2f\n", stddev);

    return 0;
}

