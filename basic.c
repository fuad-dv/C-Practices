#include<stdio.h>
int main(){
    printf("Enter The Radius : ");
    int r;
    scanf("%d",&r);
    int h;
    printf("Enter The Height : ");
    scanf("%d",&h);
    float a;
    a = (2 * 3.1416 * r * h) + (2 * 3.1416 * r * r);
    printf("%f",a);
    return 0;

}