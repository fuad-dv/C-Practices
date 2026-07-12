/*Ques: Take 3 positive integers input and print
the greatest of them.*/

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter 1st Number : ");
    scanf("%d",&x);
    printf("Enter 2nd Number : ");
    scanf("%d",&y);
    printf("Enter 3rd Number : ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("%d is the greatest number !",x);
    }
    if(y>x && y>z){
        printf("%d is the greatest number !",y);
    }
    if(z>x && z>y){
        printf("%d is the greatest number !",z);
    }
    else{
        printf("There is no greatest number !");
    }
    return 0;
}