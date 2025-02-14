#include <stdio.h>
#include <math.h> 

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    if(fmod(a, b) != 0.0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0; 
}
