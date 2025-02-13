#include <stdio.h>
int clearbit(int num, int n){
    int mask = ~(1 << n);
    return num & mask;
}
int main(){
    int number , postion;
    scanf("%d %d",&number , &positon);
    printf("%d \n", clearbit(number , positon));
    return 0;
    
}