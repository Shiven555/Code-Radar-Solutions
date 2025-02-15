#include <stdio.h>

int main() {
    int grades;
    char ch;
    scanf("%d", &grades);
    switch(grades) {
        case 1:
            ch = 'A';
            printf("Excellent\n");
            break;
        case 2:
            ch = 'B';
            printf("Good\n");
            break;
        case 3:
            ch = 'C';
            printf("Average\n");
            break;
        case 4:
            ch = 'D';
            printf("Below Average\n");
            break;
        case 5:
            ch = 'f';
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            return 1;
    }
        printf("%c\n", ch);

    return 0;
}
