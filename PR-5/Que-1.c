//TODO: All Negative elements in array

#include <stdio.h>

#define MAX 100

int main() {

    // Declaring the elements
    int a[MAX];
    int i, n, found = 0;

    // Taking the input for lenght of array
    printf("Enter the limit: ");
    scanf("%d", &n);

    // Input array elements
    printf("\nEnter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Printing all negative elements in arrays
    printf("\nNegative elements in the array are:\n");
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    // It acts like an else case for negative elements
    if (found == 0) {
        printf("No negative elements found.");
    }

    return 0; // Programs return false
}
