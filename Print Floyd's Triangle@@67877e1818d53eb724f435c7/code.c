#include<stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i = 1;i<=rows;i++){
        for(j=i;j<=rows;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}