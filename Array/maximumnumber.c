/**Ques: Find the maximum value out of all the elements
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
    int max=-1;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The Maximum number is =%d",max);
    return 0;
}