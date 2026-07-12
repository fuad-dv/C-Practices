#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="admin124";
    char str2[100];
    printf("Enter password: ");
    scanf("%s",str2);
    if(strcmp(str1,str2)==0){
        printf("Access granted!");
    }
    else{
        printf("Access denied");
    }
    return 0;
}