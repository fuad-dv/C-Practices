#include<stdio.h>
int main(){
    int pr;
    printf("Welcome to salary calculator!!");
    printf("Enter Your performance rating : ");
    scanf("%d",&pr);
    if(pr>=8){
        printf("Congratulations!!You will get 10 percent bonus with your salary");
    }
    else if(pr>5 && pr<7){
        printf("Congratulations!!You will get 20 percent bonus with your salary");
    }
    else{
        printf("Unfortunately!!You will get 0 percent bonus with your salary");
    }
    return 0;
}