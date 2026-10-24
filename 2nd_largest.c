#include <stdio.h>

int main() {
    int n, i, num;
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    scanf("%d", &num);
    largest = num;

    scanf("%d", &num);
    if (num > largest) {
        secondLargest = largest;
        largest = num;
    } else {
        secondLargest = num;
    }

    for (i = 2; i < n; i++) {
        scanf("%d", &num);

        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}