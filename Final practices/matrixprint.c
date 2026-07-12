#include<stdio.h>
#define n 3
int main(){
    int rowSum=0,colSum=0;
    int matrix[n][n];
    printf("Enter the elements of matrix : \n"); //Input taking
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){   //printing matrix
        for(int j=0;j<n;j++){
            printf("Complete matrix is :%d\n",matrix[i][j]);
        }
        printf("\n");
    }
    for(int j=0;j<n;j++){
        rowSum=matrix[1][j] + rowSum;
    }
    for(int i=0;i<n;i++){
        colSum=matrix[i][1] + colSum;
    }
    printf("Sum of the middle rows : %d\n",rowSum);
    printf("Sum of the middle Columns : %d\n",colSum);
    return 0;
}