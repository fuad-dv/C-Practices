/*The array arr[5]={4,7,2,6,1}. Ques: Calculate the sum of all the elements in the
given array.*/
#include<stdio.h>
int main(){
    int arr[5]={4,7,2,6,1};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}