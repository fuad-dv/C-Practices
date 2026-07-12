#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        printf("Enter the index of the array :");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=arr[i]+sum;
        }
    }
    printf("The sum is : %d",sum);
    return 0;
}