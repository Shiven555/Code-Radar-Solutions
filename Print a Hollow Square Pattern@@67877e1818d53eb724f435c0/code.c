#include<stdio.h>
int main(){
    int i,j,rows;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if(j==1 || j==rows || i==1 || i==rows)
            printf("  ");
            else
            printf("*");
        }
    }
}