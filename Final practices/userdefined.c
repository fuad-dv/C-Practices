#include<stdio.h>
int sumofdigits(int num){
    int sum=0;
    int lastdigit=0;
    while(num>0){
        lastdigit=num%10;
        sum=lastdigit+sum;
        num=num/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int result=sumofdigits(n);
    printf("The sum of given number is :%d",result);
    return 0;
}
