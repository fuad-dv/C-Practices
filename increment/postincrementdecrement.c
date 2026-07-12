/*Post-Increment and decrement*/
#include<stdio.h>
int main(){
    int a=5;
    printf("a is =%d\n",a); // Normally a=5;
    printf("a is =%d\n",a++); // answer is a=5,but internally it changed intto 6(post increment applied);
    printf("a is =%d\n",a); // a=6;
    printf("a is =%d\n",a--); // answer is a=6,but internally it changed into 5(post decrement applied) 
    printf("a is =%d\n",a); // a=5;
    return 0;
}