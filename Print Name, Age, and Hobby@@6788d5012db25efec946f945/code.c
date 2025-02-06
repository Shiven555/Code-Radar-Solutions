#include <stdio.h>
int main(){
    char str1[] = "Alice";
    scanf("%s",&str1);
 
    int a;
    getchar();
    scanf("%d",&a);
    char str2[] = "Painting";
    scanf("%s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",str2);
}