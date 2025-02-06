#include <stdio.h>
int main(){
    char str1[] = "Alice";
    scanf("%c",&str1);
    int a = 25;
    scanf("%d",&a);
    char str2[] = "Painting";
    scanf("%c",&str2);
    printf("Name: %c\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %c\n",str2);
}