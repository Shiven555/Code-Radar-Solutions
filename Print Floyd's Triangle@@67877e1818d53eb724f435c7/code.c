#include <stdio.h>
int main(){
    int i,j,n,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            print("%d ",j);
            num++;
        }
        printf("\n");
    }
}