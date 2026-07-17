/* Insertion — Insert 25 at index 2 in array, new size will be increased*/
#include<stdio.h>
int main(){
    int n;
    int val=25;
    int pos = 2;
    printf("Enter the size : ");
    int arr[n+1];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the index accordingly : ");
        scanf("%d",&arr[i]);
    }
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
        n++;
        
    printf("\n");

    printf("New Array : ");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}