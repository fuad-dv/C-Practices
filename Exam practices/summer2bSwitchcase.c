#include<stdio.h>
int main(){
    int choice;
    printf("Enter choice :");
    scanf("%d",&choice);
    float radius,oneside,length,width,area;
    switch(choice){
        case 1:
        printf("Enter radius : ");
        scanf("%f",&radius);
        area= 3.1416 * radius*radius;
        printf("Area of a circle is : %f",area);
        break;
        case 2:
        printf("Enter One Side : ");
        scanf("%f",&oneside);
        area=oneside*oneside;
        printf("Area of a Square is : %f",area);
        break;
        case 3:
        printf("Enter length :");
        scanf("%f",&length);
        printf("\nEnter width :");
        scanf("%f",&width);
        area=length*width;
        printf("Area of a Rectangle is : %f",area);
        break;
        default:
        printf("Invalid Choice!");
    }
    return 0;
}