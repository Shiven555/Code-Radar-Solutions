#include <stdio.h>

int main(){
    int num, divisor;
    
   
    scanf("%d", &num);
 
    scanf("%d", &divisor);
    
   
    if(num % divisor == 0){
        printf("Yes %d\n", num, divisor);
    }
    else{
        printf("No %d\n", num, divisor);
    }
    
    return 0;
}
