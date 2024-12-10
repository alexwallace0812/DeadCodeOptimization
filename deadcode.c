#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int debug = 0;

// Function to sum up all elements in an array and double the result
int doubleSum(int *array, int length) {
    int i, total = 0;
    for (i = 0; i < length; i++) {
        total += array[i];
        // Dead code: this block will never execute as the condition is always false
        if (0) { 
            printf("array[%d] is: %d\n", i, array[i]);
        }
    }
    return 2 * total;
}

int main() {
    const int length = 1000000;  // Large array size for noticeable time difference
    int array[length];

    // Seed the random number generator and populate the array with random numbers
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 100;  // Random numbers between 0 and 99
    }

    // Call the doubleSum function and print the result
    int result = doubleSum(array, length);
    printf("The doubled sum is: %d\n", result);

    return 0;
}




int calculate(int x) {
    int y = x * 5;
    int z = x + 10;
    return x * 2;
}
int calculate(int x) {
    return x * 2;
}
