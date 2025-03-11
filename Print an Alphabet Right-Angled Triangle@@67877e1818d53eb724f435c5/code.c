#include<stdio.h>
int main(){
    int rows;
    char j;
    scanf("%d",&rows);
    for(int i=rows;i>=1;i--){
        for( j='A';j< 'A' + i;j++){
            printf("%c ",j);
        }
    printf("\n");
    }

}