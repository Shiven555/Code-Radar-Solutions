#include <stdio.h>
int main(){
    int n,m,nthbits;
    scanf("%d %d ",&n,&m);
    nthbit = 1&(n >> m);
    printf("%d",nthbit);
    return0;

}
