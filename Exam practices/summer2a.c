#include<stdio.h>
int main(){
    int t;
    printf("Enter a time(24 hour format): ");
    scanf("%d", &t);
    if(t>=6 && t<=11){
        printf("Recommendation is:Pancakes and coffee");
    }
    else if(t>=12 && t<=15){
        printf("Recommendation is :Chicken salad");
    }
    else if(t>=16 && t<=18){
        printf("Recommendation is :Samosa and chai");
    }
    else if(t>=19 && t<=22){
        printf("Recommendation is : Grilled steak");
    }
    else{
        printf("Not recommendable dishes right now!!! Try again later\n");
    }
    return 0;
}