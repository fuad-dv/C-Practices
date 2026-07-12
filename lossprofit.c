/*Ques: If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/

#include<stdio.h>
int main(){
    float costprice,sellingprice,amount;
    printf("Enter the Cost Price = ");
    scanf("%f",&costprice);
    printf("Enter the Selling Price = ");
    scanf("%f",&sellingprice);
    if(costprice<sellingprice){
        float amount = sellingprice - costprice;
        printf("Congrats !! You make profit and profit amount is = %f",amount);
    }
    else{
        int am = costprice - sellingprice;
        printf("Sorry ! You made a loss and here's the loss amount = %d",am);
    }
    return 0;
}