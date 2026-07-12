#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a;
    int b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int add=sum(a,b);
    printf("The sum is %d",add);
    return 0;
}