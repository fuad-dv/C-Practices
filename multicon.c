/*Ques: Take positive integer input and tell if it
is a three digit number or not.*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if(a<1000 && a>99){
        printf("The Number is Three-3 digit ! ");
    }
    else{
        printf("The Number is not 3 digit ");
    }
    return 0;
}