/**Ques: Find the minimum value out of all the elements
in the array.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter the index accordingly :");
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("The Minimum number is =%d",min);
    return 0;
}