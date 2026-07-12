// Insertion — Insert 25 at index 2 in arr[5] = {10,20,30,40,50}, size becomes 6
#include <stdio.h>
int main(){
    int arr[10] = {10,20,30,40,50};
    int n=5, pos=2, val=25, i;
    for(i=n; i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}