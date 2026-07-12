#include<stdio.h>
int main(){
    int ic,q,total;
    printf("Enter item code(1-3) : ");
    scanf("%d",&ic);
    switch(ic){
        case 1:
        printf("Enter Quantity :");
        scanf("%d",&q);
        total=q*180;
        printf("Total Bill = %d",total);
        break;
        case 2:
        printf("Enter Quantity :");
        scanf("%d",&q);
        total=q*250;
        printf("Total Bill = %d",total);
        break;
        case 3:
        printf("Enter Quantity :");
        scanf("%d",&q);
        total=q*200;
        printf("Total Bill = %d",total);
        break;
        default:
        printf("Invalid item code! Please select 1 to 3");
    }
    return 0;
}