#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive",a);
    }
    else if(a<0 && a==0){
        printf("Negative",a);
    }
 
}