#include <stdio.h>

int main() {
    int i, j,rows;
    scanf("%d",&rows);
    char ch = 'A';
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        ch+; 
        printf("\n"); 
    }
    return 0;
}
