#include<stdio.h>
int main(){
    int arr[5]={1,4,5,9,15};
    for(int i=0;i<5;i++){
        if(arr[i]%2!=0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}