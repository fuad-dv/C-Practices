/*Ques: Given an array of marks(95,90,31,25,100,50,65,89,97,30) of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.*/
#include<stdio.h>
int main(){
    int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for(int i=1;i<10;i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
}