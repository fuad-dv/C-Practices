// Take a Positive integer and tell if it is even or odd?
#include<stdio.h>
int main(){
    printf("Enter a Number : ");
    int x;
    scanf("%d",&x);
    if(x%2==0){
        printf("The Number is even");
    }
    else{
        printf("The Number is Odd");
    }
    return 0;
}