#include<stdio.h>
void main(){
    bubblesort();

}
void bubblesort(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;

}