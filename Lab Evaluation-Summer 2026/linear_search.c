/*Linear Search ,,, Time complexity big(O)(n)*/
#include<stdio.h>
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,25,56,46,43,57,88};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    int target;
    printf("Enter the Element you want to search : ");
    scanf("%d",&target);
    int result = linearsearch(arr,n,target);
    if(result!=-1){
        printf("Element %d found at index %d",target,result);
    }
    else{
        printf("Element %d not found",target);
    }
}