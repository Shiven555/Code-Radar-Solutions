#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    scanf("%lf", &num1);
    scanf(" %c", &operator); 
    scanf("%lf", &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = num1 / num2;
                printf("%.2lf\n", result);
            
        default:
            printf("error");
    }
}

