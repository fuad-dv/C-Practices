#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int r=0;
    int lastDigit=0;
    int sum=0;
    while(n>0){
        lastDigit=n%10;
        sum=sum+lastDigit;
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The Sum of the Digits is : %d\n",sum);
    printf("The Reverse digits are : %d",r);
    return 0;
}