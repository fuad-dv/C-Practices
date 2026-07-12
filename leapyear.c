/*Any year is input through the keyboard. Write
a program to determine whether the year is a leap
year or not. (Considering leap year occurs after
every 4 years).*/

#include<stdio.h>
int main(){
printf("Enter a Year : ");
int y;
scanf("%d",&y);
if(y%4==0){
    printf("It's a leap year !");
}
else{
    printf("Unfortunately, It's not in the leap year !");
}
    return 0;
}