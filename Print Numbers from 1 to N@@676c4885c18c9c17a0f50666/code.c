#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;){
        for(j=1;j<=n;){
            printf("%d ",j);
        }
        printf("\n");
    }
}