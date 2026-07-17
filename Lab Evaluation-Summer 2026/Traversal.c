/*Traversing the ARRAY*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the index accordingly : ");
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}