#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    char ch = 'A';
    for(i = n;i>=1;i--){
        printf("A ",ch);
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        
    }
    
}