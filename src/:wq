#include <stddef.h>

int thirdMax(int* nums, int numsSize) {
    // If the array has fewer than 3 elements, return the maximum of the array
    if (numsSize < 3) {
        int max = nums[0];
        for (int i = 1; i < numsSize; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }

    // Sort the array in descending order
    int temp;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] < nums[j]) { // Sorting in descending order
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // Find the third distinct maximum
    int count = 1;  // We already have the first distinct maximum at index 0
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) { // Skip duplicates
            count++;
        }
        if (count == 3) {
            return nums[i];  // Return the third distinct maximum
        }
    }

    // If there aren't three distinct numbers, return the maximum
    return nums[0];
}
