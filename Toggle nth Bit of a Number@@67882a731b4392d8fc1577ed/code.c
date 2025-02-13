#include <stdio.h>
int main(){
int num,n;
scanf("%d %d ",&num,n);
num ^= (1 << n);
printF("%d\n",num);
return 0;


}