#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vectorSum[size];
    int scalarSum = 0;

    // Input values for array1
    printf("Enter %d integer values for array1:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Input values for array2
    printf("Enter %d integer values for array2:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate the scalar sum
    for (int i = 0; i < size; i++) {
        scalarSum += array1[i];
    }

    // Calculate the vector sum
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }

    printf("Scalar Sum: %d\n", scalarSum);

    printf("Vector Sum (array1 + array2): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
