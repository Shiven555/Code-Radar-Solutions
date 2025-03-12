#include<stdio.h>
int main(){
int i,j,rows;
char ch='A';
scanf("%d",&rows);
for(i = 1;i <= rows;i++){
    printf("A ");
    for(j=1;j<i;j++){
        printf("%c ", ch+j);
    }
    printf("\n");
}
}