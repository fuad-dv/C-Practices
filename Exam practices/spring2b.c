#include<stdio.h>
int main(){
    int father,mother,brother,remaining,method,total;
    float purchase;
    printf("Enter money from Father :");
    scanf("%d",&father);
    printf("Enter money from Mother :");
    scanf("%d",&mother);
    printf("Enter money from Brother :");
    scanf("%d",&brother);
    printf("Enter Purchase Amount :");
    scanf("%f",&purchase);
    printf("Enter Payment method :");
    scanf("%d",method);
    /*if(method>1){
        printf("Invalid payment method");
        return 0;
    }*/
    total=father+mother+brother;
    printf("Total money avail-able: %d\n",total);
    if(method>=1){
        purchase=purchase -(purchase*0.15);
        printf("Final Purchase Amount After 15 per cent discount : %f\n",purchase);
    }
    remaining=total-purchase;
    printf("Remaining Money : %d",remaining);
    return 0;
}