#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
