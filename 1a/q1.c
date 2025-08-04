#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of integers must be greater than zero.\n");
        return 1;
    }

    int numbers[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;

    printf("The average is: %.2f\n", average);

    return 0;
}
