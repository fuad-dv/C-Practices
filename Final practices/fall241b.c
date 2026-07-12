#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter first word : ");
    scanf("%s",str1);
    printf("Enter second word : ");
    scanf("%s",str2);
    strcat(str1,str2);
    printf("Concatenated String is: %s\n",str1);
    printf("The total length is :%zu",strlen(str1));
    return 0;
}