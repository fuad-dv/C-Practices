#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,1};
    /*If I put:
    int arr[4]=100;    the it changed the whole array like this : int arr[5]={2,4,6,8,100}
    */
    printf("%d",arr[0]);
    return 0;
}