#include <stdio.h>
int main(){
    int i,j,rows,space;
    scanf("%d",&rows);
    for(i = 1; i <= rows; i++ ){
        for(space = i; space<=(rows - i); space++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

}