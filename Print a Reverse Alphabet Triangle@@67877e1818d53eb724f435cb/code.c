#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    char ch = 'A';
    for(i = n;i>=1;i--){
        printf("A ");
       
        for(j=1;j<=i-1;j++){
            printf("%c ",ch+j);
            ;
        }
        printf("\n");
        
    }
    
}