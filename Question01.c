#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int min, max;
    double sum = 0.0;

    // Input values to the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find minimum and maximum values
    min = arr[0];
    max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Calculate the sum for average
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }

    // Calculate the average
    double average = sum / 10.0;

    // Print the results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    // Reverse order of values
    printf("Reverse order of values: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
