#include <stdio.h>
void printDiamond(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--) {
        for(j = n; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printDiamond(rows);
    return 0;
}
