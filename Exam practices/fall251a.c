#include<stdio.h>
int main(){
    int a=15,b=7,c,d;
    b=a++;
    c=--b;
    d=(a>b)&&(b>c);
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}