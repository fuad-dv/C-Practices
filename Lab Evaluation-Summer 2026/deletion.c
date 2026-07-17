/*Delete by value — delete 30 from {10,20,30,40,50}*/
#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int key=30;
    int n=5;
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        printf("Element not found!! Double check ");
    }
    else{
        for(int i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}