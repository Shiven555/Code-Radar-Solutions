#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&a);
    if(ch>="A" && ch>="Z"){
        printf("Uppercase",ch);
    }
    else if(ch>="a" && ch>="z"){
        printf("Lowercase",ch);
    }
    else{
        printf("Not an alphabet")
    }
}