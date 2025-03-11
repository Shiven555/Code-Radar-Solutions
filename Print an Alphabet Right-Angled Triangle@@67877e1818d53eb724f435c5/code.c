#include<stdio.h>
int main(){
    int rows;
    char j;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for( j=i;j<= 'A';j++){
            printf("%c",j);
        }
    printf("\n");
    }

}