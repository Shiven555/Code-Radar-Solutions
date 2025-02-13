#include <stdio.h>
int clearbit(int num, int n){
    int mask = ~(1 << n);
    return num & mask;
}
int main(){
    int number,position;
    scanf("%d %d",&number , &position);
    printf("%d \n", clearbit(number , position));
    return 0;
    
}