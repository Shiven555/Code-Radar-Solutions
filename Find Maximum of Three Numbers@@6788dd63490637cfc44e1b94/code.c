#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the maximum number
    int max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    // Display the maximum number
    printf("%d\n", max);

    return 0;
}
