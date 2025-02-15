#include <stdio.h>

int main() {
    int grades;
    char ch;

    scanf("%d", &grades);

    // Determine the corresponding grade character
    switch(grades) {
        case 1:
            ch = 'A';
            printf("Excellent\n");
            break;
        case 2:
            ch = 'B';
            printf("Very Good\n");
            break;
        case 3:
            ch = 'C';
            printf("Good\n");
            break;
        case 4:
            ch = 'D';
            printf("Satisfactory\n");
            break;
        case 5:
            ch = 'E';
            printf("Needs Improvement\n");
            break;
        default:
            printf("Invalid grade\n");
            return 1;
    }
        printf("Grade: %c\n", ch);

    return 0;
}
