#include<stdio.h>
int main(){
    /*print  numbers from 1 to 100 line by line*/
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i); //even numbers only
        }
        //printf("%d\n",i); //main questions only!!
    }
    return 0;
}