#include<stdio.h>
int main(){
    char str[200];
    printf("Enter a sentence : ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("Uppercase to Lowercase : %s",str);
    return 0;
}