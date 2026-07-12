/*write a code for n'th table. Here's n is user user input value.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d\n",i);
    }
    return 0;
}