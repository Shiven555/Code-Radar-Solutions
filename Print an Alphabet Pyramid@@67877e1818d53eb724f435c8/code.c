#include <stdio.h>

int main() {
    int i, j , rows;
    scanf("%d",&rows);
    char ch = 'A';

    for (i = 1; i <= rows; i++) {
        printf("A ");  
        for (j = 1; j < i; j++) {
            printf("%c ", ch + j);
        }
        printf("\n"); 
    }

    return 0;
}
