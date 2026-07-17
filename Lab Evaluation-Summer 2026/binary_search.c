/*Binary Search(Array Must be sorted), Time complexity big(O)log(n)*/
#include<stdio.h>
int binarysearch(int arr[],int n,int target){
    int left=0;
    int right=n-1;
       while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoids overflow
        
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1; 
        }
    }
    return -1;
}
int main(){
    int arr[]={10,13,17,19,23,45,57,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Here's the sorted Array : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    int target;
    printf("Which Element you want to search : ");
    scanf("%d",&target);
    int result=binarysearch(arr,n,target);
    if(result!=-1){
        printf("Element %d found at index %d",target,result);
    }
    else{
        printf("Element %d not found in the given Array!! Try Again with another digit");
    }
    return 0;
}