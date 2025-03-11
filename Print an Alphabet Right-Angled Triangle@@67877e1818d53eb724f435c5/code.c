#include<stdio.h>
int main(){
    int rows;
    char j;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for( j='A';j<= i;j++){
            printf("%c",j);
        }
    printf("\n");
    }

}