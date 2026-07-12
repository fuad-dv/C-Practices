/*Ques: Take 3 numbers input and tell if they
can be the sides of a triangle.*/

#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the 1st Number : ");
    scanf("%d",&x);
    printf("Enter the 2nd Number : ");
    scanf("%d",&y);
    printf("Enter the 3rd Number : ");
    scanf("%d",&z);
    if(x+y>z || x+z>y || y+z>x){
        printf("It's a formation of a triangle!");
    }
    else{
        printf("It's does not form a triangle!");
    }
    return 0;
}