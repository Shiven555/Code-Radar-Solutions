#include <stdio.h>

int main() {
    int a,b,i;
    scanf("%d",&a);
    for(i = a;i>=1;--i){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf(\n);
    }

    return 0;
}
