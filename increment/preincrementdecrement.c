/*Pre-Increment and decrement*/
#include<stdio.h>
int main(){
    int a=5;
    printf("a is =%d\n",a); // Normally a=5;
    printf("a is =%d\n",++a); // here's firstly increment applied then sum with a. e.g.(a=1+a)=6;
    printf("a is =%d\n",a); // a=6;
    printf("a is =%d\n",--a); // Firstly pre decrement applied then the a. e.g(1-a)=5;
    printf("a is =%d\n",a); // a=5;
    return 0;
}