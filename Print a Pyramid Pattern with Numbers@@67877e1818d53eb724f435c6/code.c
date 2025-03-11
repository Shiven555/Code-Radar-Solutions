#include<stdio.h>
int main(){
    int i,j,rows,k;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=i;j<=rows;j++){
            printf("");
        }
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
    printf("\n");
    }
}