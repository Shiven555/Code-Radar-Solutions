#include <stdio.h>
int main(){
    char str1[60];
    scanf("%s",&str1);
 
    int a;
    
    scanf("%d",&a);
    char str2[20];
    scanf("%s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",str2);
}