#include <stdio.h>

int main() {
    float num1, num2, num3;

  
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    
    float max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    // Display the maximum number
    printf("%d", max);

    return 0;
}
